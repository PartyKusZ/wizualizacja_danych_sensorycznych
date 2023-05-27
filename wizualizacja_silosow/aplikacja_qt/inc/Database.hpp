#pragma once 
#include <iostream>
#include <array>
#include <sqlite3.h>
#include <string>
#include <chrono>
#include <iomanip>
#include <utility>
#include <regex>
#include <vector>
#include <QObject>
#include <QTimer>
#include <Db_data.hpp>


constexpr char CREATE_SILO_1[] = "CREATE TABLE IF NOT EXISTS silo_1 ("  \
   "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
   "Volume INT NOT NULL," \
   "Temperature_1 INT NOT NULL," \
   "Temperature_2 INT NOT NULL," \
   "Humidity_1 INT NOT NULL," \
   "Humidity_2 INT NOT NULL," \
   "Time TEXT NOT NULL," \
   "Date TEXT NOT NULL);"; //!< query to create a table if it does not exist 

constexpr char CREATE_SILO_2[] = "CREATE TABLE IF NOT EXISTS silo_2 ("  \
   "ID INTEGER PRIMARY KEY AUTOINCREMENT," \
   "Volume INT NOT NULL," \
   "Temperature_1 INT NULL," \
   "Temperature_2 INT NULL," \
   "Humidity_1 INT NULL," \
   "Humidity_2 INT NULL," \
   "Time TEXT NOT NULL," \
   "Date TEXT NOT NULL);"; //!< query to create a table if it does not exist 



/**
 * @brief class representing a database created in SQLite
 * 
 */
class Database: public QObject{
    Q_OBJECT
    private:
        std::array<int,5> &silos_1; //!< store data for silo 1
        std::array<int,5> &silos_2; //!< store data for silo 2
        QTimer timer; //!< determines how often the database is written to 
        sqlite3 *db; //!< SQLite database
        char *error_msg = 0; //!< errors from SQLite
        std::vector<Db_data> data; //!< data extracted from the database
        std::array<std::string,5> col_names = {"Volume","Temperature_1","Temperature_2","Humidity_1","Humidity_2"};

        std::array<std::regex,8> regexes = {std::regex("0_"), std::regex("1_"), std::regex("2_"), 
                                            std::regex("3_"), std::regex("4_"), std::regex("5_"), 
                                            std::regex("6_"), std::regex("7_") 
                                            }; //!< regular expressions for completing SQL queries
        

        std::string INSERT_ = "INSERT INTO 0_ (Volume, Temperature_1, Temperature_2, Humidity_1, Humidity_2, Time, Date) " \
                "VALUES (1_, 2_, 3_, 4_, 5_, 6_, 7_);"; //!< insert query with regexes
        std::string SELECT_ ="SELECT 0_, Time, Date FROM 1_ WHERE Date >= 2_ AND Date <= 3_;"; //!< select query with regexes


        static int sqlite_callback(void* data, int argc, char** argv, char** azColName);
        std::pair<std::string,std::string>  get_time_date();
    public:
        Database(const std::string db_name,std::array<int,5> &_silos_1,std::array<int,5> &_silos_2);
        void insert_silo_1(std::array<int,5> silos_1);
        void insert_silo_2(std::array<int,5> silos_2);
        std::vector<Db_data> select_silos_1(int col,std::string date_begin, std::string date_end);
        std::vector<Db_data> select_silos_2(int col,std::string date_begin, std::string date_end);
    public slots:
        void update();


        


};

