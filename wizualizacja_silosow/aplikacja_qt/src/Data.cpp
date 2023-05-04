#include "Data.hpp"



/**
 * @brief Normalizes the data received from the serial port for silo 1
 * 
 */
void Data::data_normalizer_1(){
    for(int i = 1; i < this->silos_1.size(); ++i){
        silos_1[i] = silos_1[i] / 10.0;
    }
}



/**
 * @brief Normalizes the data received from the serial port for silo 2
 * 
 */
void Data::data_normalizer_2(){
    for(int i = 1; i < this->silos_2.size(); ++i){
        silos_2[i] = silos_2[i] / 10.0;
    }
}



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
                silos_1[i] = static_cast<double>( _data[i]);
            } 
        this->data_normalizer_1();

        }
        if(_data.back() == SECOND){
            for(int i = 0; i < silos_2.size(); ++i){
                silos_2[i] = static_cast<double>( _data[i]);
            } 
          this->data_normalizer_2();

        }
    }
}


/**
 * @brief  data for silo No. 1
 * 
 * @return std::array<int, 5> 
 */

std::array<double, 5> Data::get_data_silos_1(){

    std::lock_guard<std::mutex> guard(lock);
    return silos_1;
}



/**
 * @brief  data for silo No. 2
 * 
 * @return std::array<int, 5> 
 */
std::array<double, 5> Data::get_data_silos_2(){
    
    std::lock_guard<std::mutex> guard(lock);
    return silos_2;
}
