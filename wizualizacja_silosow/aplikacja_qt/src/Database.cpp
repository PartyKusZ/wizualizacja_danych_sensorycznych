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


void Database::insert_silo_1(std::array<int,5> silos_1){

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