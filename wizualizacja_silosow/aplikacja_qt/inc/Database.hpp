#pragma once 
#include <iostream>
#include <array>
#include <sqlite3.h>
#include <string>
#include <chrono>
#include <iomanip>
#include <utility>
#include <regex>


constexpr char CREATE_SILO_1[] = "CREATE TABLE IF NOT EXISTS silo_1 ("  \
   "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
   "Volume INT NOT NULL," \
   "Temperature_1 INT NOT NULL," \
   "Temperature_2 INT NOT NULL," \
   "Humidity_1 INT NOT NULL," \
   "Humidity_2 INT NOT NULL," \
   "Time TEXT NOT NULL," \
   "Date TEXT NOT NULL);";

constexpr char CREATE_SILO_2[] = "CREATE TABLE IF NOT EXISTS silo_2 ("  \
   "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
   "Volume INT NOT NULL," \
   "Temperature_1 INT NULL," \
   "Temperature_2 INT NULL," \
   "Humidity_1 INT NULL," \
   "Humidity_2 INT NULL," \
   "Time TEXT NOT NULL," \
   "Date TEXT NOT NULL);";




class Database{
    private:
        sqlite3 *db;
        std::string query;
        char *error_msg = 0;

        std::array<std::regex,8> regexes = {std::regex("0_"), std::regex("1_"), std::regex("2_"), 
                                            std::regex("3_"), std::regex("4_"), std::regex("5_"), 
                                            std::regex("6_"), std::regex("7_") 
                                            };

        std::string INSERT = "INSERT INTO 0_ (Volume, Temperature_1, Temperature_2, Humidity_1, Humidity_2, Time, Date) " \
                "VALUES (1_, 2_, 3_, 4_, 5_, 6_, 7_);";

        int get_silo_1(void *NotUsed, int argc, char **argv, char **azColName);
        int get_silo_2(void *NotUsed, int argc, char **argv, char **azColName);
        std::pair<std::string,std::string>  get_time_date();
    public:
        Database(const std::string db_name);
        void insert_silo_1(std::array<int,5> silos_1);
        void insert_silo_2(std::array<int,5> silos_2);
        


};