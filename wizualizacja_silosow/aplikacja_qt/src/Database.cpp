#include "Database.hpp"

Database::Database(const std::string db_name){
    int status = sqlite3_open(db_name.c_str(),&db);
    if(status){
        std::cerr << "Can't open database: "<<sqlite3_errmsg(db)<< std::endl;
    }   
    status = sqlite3_exec(db, CREATE_SILO_1, NULL, NULL, &error_msg);
    status = sqlite3_exec(db, CREATE_SILO_2, NULL, NULL, &error_msg);
    
    
}

std::pair<std::string,std::string>  Database::get_time_date(){

    auto now = std::chrono::system_clock::now();

    // Przekształć go na obiekt time_t
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Utwórz strumienie ostringstream
    std::ostringstream dateStream;
    std::ostringstream timeStream;

    // Wykorzystaj funkcję put_time do wpisania daty i godziny do strumieni
    dateStream << std::put_time(std::localtime(&currentTime), "%Y-%m-%d");
    timeStream << std::put_time(std::localtime(&currentTime), "%H:%M:%S");

    // Przekształć strumienie do stringów
    std::string date = dateStream.str();
    std::string time = timeStream.str();

    // Wyświetl stringi
    std::cout << "Current date: " << date << '\n';
    std::cout << "Current time: " << time << '\n';

    return std::make_pair(time, date);

}


  int Database::sqlite_callback(void* data, int argc, char** argv, char** azColName){

    std::vector<Db_data>* results = static_cast<std::vector<Db_data>*>(data);
    Db_data newRow;
    newRow.data = std::stoi(argv[0]); // Konwersja na int
    newRow.time = argv[1]; // Przypisanie stringa
    newRow.date = argv[2]; // Przypisanie stringa
    results->push_back(newRow);
    return 0;
}


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


std::vector<Db_data> Database::select_silos_1(int col,std::string date_begin, std::string date_end){
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

std::vector<Db_data> Database::select_silos_2(int col,std::string date_begin, std::string date_end){

    std::string SELECT = SELECT_;
    SELECT = std::regex_replace(SELECT,regexes[1],"silo_2");
    SELECT = std::regex_replace(SELECT,regexes[0],this->col_names[col]);
    date_begin = "'" + date_begin + "'";
    date_end = "'" + date_end + "'";
    SELECT = std::regex_replace(SELECT,regexes[2],date_begin);
    SELECT = std::regex_replace(SELECT,regexes[3],date_end);
    std::cout<<SELECT<<std::endl;
    sqlite3_exec(db, SELECT.c_str(), sqlite_callback, &data, &error_msg);   
    
     
    return this->data;
}