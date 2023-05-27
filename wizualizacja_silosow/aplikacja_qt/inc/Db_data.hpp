#pragma once
#include <string>
/**
 * @brief structure representing a single record in a database 
 * 
 */
class Db_data{
   public:
        int data; //!< depending on context: volume, temperature humidity
        std::string time;
        std::string date;
};