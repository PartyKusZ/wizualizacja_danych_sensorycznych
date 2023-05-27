#include "Database.hpp"
/**
 * @brief Construct a new Database:: Database object
 * @details opens a connection to the database, creates tables if they do not exist, starts a timer that determines the frequency of writing to the database. 
 * @param db_name 
 * @param _silos_1 
 * @param _silos_2 
 */

Database::Database(const std::string db_name,std::array<int,5> &_silos_1,std::array<int,5> &_silos_2): QObject(), silos_1(_silos_1),silos_2(_silos_2){
    int status = sqlite3_open(db_name.c_str(),&db);
    if(status){
        std::cerr << "Can't open database: "<<sqlite3_errmsg(db)<< std::endl;
    }   
    status = sqlite3_exec(db, CREATE_SILO_1, NULL, NULL, &error_msg);
    status = sqlite3_exec(db, CREATE_SILO_2, NULL, NULL, &error_msg);

    this->timer.setInterval(3000);
    this->connect(&this->timer,&QTimer::timeout,this,&Database::update);
    this->timer.start();
    
    
}
/**
 * @brief writes to the base after the timer signal is held
 * 
 */

void Database::update(){
    this->insert_silo_1(silos_1);
    this->insert_silo_2(silos_2);
}

/**
 * @brief Returns the current time and date on the basis of data from the computer, necessary for storing in the database. 
 * 
 * @return std::pair<std::string,std::string> pair: time and date
 */

std::pair<std::string,std::string>  Database::get_time_date(){

    auto now = std::chrono::system_clock::now();

    // Przekształć go na obiekt time_t
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Utwórz strumienie ostringstream
    std::ostringstream dateStream;
    std::ostringstream timeStream;

    // Wykorzystaj funkcję put_time do wpisania daty i godziny do strumieni
    dateStream << std::put_time(std::localtime(&currentTime), "%Y-%m-%d");
    timeStream << std::put_time(std::localtime(&currentTime), "%H:%M");

    // Przekształć strumienie do stringów
    std::string date = dateStream.str();
    std::string time = timeStream.str();

    // Wyświetl stringi
    std::cout << "Current date: " << date << '\n';
    std::cout << "Current time: " << time << '\n';

    return std::make_pair(time, date);

}

    /**
     * @brief callback for the SQLite API, used to retrieve data from the database 
     * 
     * @param data object to which the data will be saved 
     * @param argc This is the number of columns in the result row
     * @param argv data from each column
     * @param azColName clos names
     * @return int status
     */

  int Database::sqlite_callback(void* data, int argc, char** argv, char** azColName){

    std::vector<Db_data>* results = static_cast<std::vector<Db_data>*>(data);
    Db_data newRow;
    newRow.data = std::stoi(argv[0]); // Konwersja na int
    newRow.time = argv[1]; // Przypisanie stringa
    newRow.date = argv[2]; // Przypisanie stringa
    results->push_back(newRow);
    return 0;
}

/**
 * @brief method that performs a write to the silo_1 table.
 * @details the query is completed by looking up regular expressions in the template query and replacing them with the correct one
 * @param silos_1 current data from silos_1
 */

void Database::insert_silo_1(std::array<int,5> silos_1){
    std::string INSERT = INSERT_;
    INSERT = std::regex_replace(INSERT,regexes[0],"silo_1");

    for(int i = 0; i < silos_1.size(); ++i){
        INSERT = std::regex_replace(INSERT,regexes[i + 1],std::to_string(silos_1[i]));
    }
    auto time_data = this->get_time_date();
    INSERT = std::regex_replace(INSERT,regexes[6],"'" + time_data.first + "'");
    INSERT = std::regex_replace(INSERT,regexes[7],"'" + time_data.second + "'");


    std::cout<<INSERT<<std::endl;
    sqlite3_exec(db, INSERT.c_str(), NULL, NULL, &error_msg);
        
}
/**
 * @brief method that performs a write to the silo_2 table.
 * @details the query is completed by looking up regular expressions in the template query and replacing them with the correct one
 * 
 * @param silos_1 current data from silos_2
 */
void Database::insert_silo_2(std::array<int,5> silos_2){
    std::string INSERT = INSERT_;
    INSERT = std::regex_replace(INSERT,regexes[0],"silo_2");

    for(int i = 0; i < silos_2.size(); ++i){
        INSERT = std::regex_replace(INSERT,regexes[i + 1],std::to_string(silos_2[i]));
    }
    auto time_data = this->get_time_date();
    INSERT = std::regex_replace(INSERT,regexes[6],"'" + time_data.first + "'");
    INSERT = std::regex_replace(INSERT,regexes[7],"'" + time_data.second + "'");


    std::cout<<INSERT<<std::endl;
    sqlite3_exec(db, INSERT.c_str(), NULL, NULL, &error_msg);
}

/**
 * @brief a method that performs a query that returns selected data from the database 
 * @details the query is completed by looking up regular expressions in the template query and replacing them with the correct one
 * @param col 
 * @param date_begin 
 * @param date_end 
 * @return std::vector<Db_data> 
 */
std::vector<Db_data> Database::select_silos_1(int col,std::string date_begin, std::string date_end){
    data.clear();
    std::string SELECT = SELECT_;
    SELECT = std::regex_replace(SELECT,regexes[1],"silo_1");
    SELECT = std::regex_replace(SELECT,regexes[0],this->col_names[col]);
    date_begin = "'" + date_begin + "'";
    date_end = "'" + date_end + "'";
    SELECT = std::regex_replace(SELECT,regexes[2],date_begin);
    SELECT = std::regex_replace(SELECT,regexes[3],date_end);
    std::cout<<SELECT<<std::endl;
    sqlite3_exec(db, SELECT.c_str(), sqlite_callback, &data, &error_msg);  
    // for (auto &&i : data)
    // {
    //     std::cout<< i.data << " " ;
    //     std::cout<< i.time << " " ;
    //     std::cout<< i.date << " " ;
    //     std::cout<<std::endl;
    // }  
    return this->data;
}
/**
 * @brief a method that performs a query that returns selected data from the database 
 * @details the query is completed by looking up regular expressions in the template query and replacing them with the correct one
 * @param col 
 * @param date_begin 
 * @param date_end 
 * @return std::vector<Db_data> 
 */
std::vector<Db_data> Database::select_silos_2(int col,std::string date_begin, std::string date_end){
    data.clear();
    std::string SELECT = SELECT_;
    SELECT = std::regex_replace(SELECT,regexes[1],"silo_2");
    SELECT = std::regex_replace(SELECT,regexes[0],this->col_names[col]);
    date_begin = "'" + date_begin + "'";
    date_end = "'" + date_end + "'";
    SELECT = std::regex_replace(SELECT,regexes[2],date_begin);
    SELECT = std::regex_replace(SELECT,regexes[3],date_end);
    std::cout<<SELECT<<std::endl;
    sqlite3_exec(db, SELECT.c_str(), sqlite_callback, &data, &error_msg);   
    
    // for (auto &&i : data)
    // {
    //     std::cout<< i.data << " " ;
    //     std::cout<< i.time << " " ;
    //     std::cout<< i.date << " " ;
    //     std::cout<<std::endl;
    // }  
     
    return this->data;
}