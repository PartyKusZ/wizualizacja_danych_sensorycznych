#pragma once
#include <array>
#include <vector>
#include <mutex>
#include <iostream>

/**
 * @brief Class storing data recived from the serial port 
 * 
 */
class Data{
    private:
        constexpr static int FIRST = 0xFE;  //!< determines the silo number
        constexpr static int SECOND = 2; //!< determines the silo number

        std::mutex lock;                 //!< mutex for blocking access to data
        std::array<double,5> silos_1;       //!< data for silos 1
        std::array<double,5> silos_2;       //!< data for silos 2
    public:
        Data(){};
        void data_normalizer();
        void set_data(std::vector<uint16_t> _data);
        std::array<double, 5> get_data_silos_1();
        std::array<double, 5> get_data_silos_2();

};