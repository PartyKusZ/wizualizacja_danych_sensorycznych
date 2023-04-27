#include "Data.hpp"

/**
 * @brief Writes the data received from the serial port into the array representing the given silo
 * 
 * @param _data 
 */


void Data::set_data(std::vector<uint16_t> _data){
    std::lock_guard<std::mutex> guard(lock);
    if(!_data.empty()){
        if(_data.back() == FIRST){
            for(int i = 0; i < silos_1.size(); ++i){
                silos_1[i] = static_cast<int>( _data[i]);
            } 
        }
        if(_data.back() == SECOND){
            for(int i = 0; i < silos_2.size(); ++i){
                silos_2[i] = static_cast<int>( _data[i]);
            } 
        }
    }
}


/**
 * @brief  data for silo No. 1
 * 
 * @return std::array<int, 5> 
 */

std::array<int, 5> Data::get_data_silos_1(){

    std::lock_guard<std::mutex> guard(lock);
    return silos_1;
}



/**
 * @brief  data for silo No. 2
 * 
 * @return std::array<int, 5> 
 */
std::array<int, 5> Data::get_data_silos_2(){
    
    std::lock_guard<std::mutex> guard(lock);
    return silos_2;
}