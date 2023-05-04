#pragma once
#include <array>
#include <vector>
#include <mutex>
#include <iostream>

/**
 * @brief Class storing data recived from the serial port 
 * @details class receives data from the serial port. These are: filling, 
 * temperature of sensor no. 1, temperature of sensor no. 2, humidity of sensor no. 1, humidity of sensor no. 2, number of the silo from which the data originates.
 * The class normalises the data received from the port and provides ready-made sets for silo 1 and silo 2. 
 */
class Data{
    private:
        constexpr static int FIRST = 0xFE;  //!< determines the silo number
        constexpr static int SECOND = 0xFD; //!< determines the silo number

        std::mutex lock;                 //!< mutex for blocking access to data
        std::array<double,5> silos_1;       //!< data for silos 1
        std::array<double,5> silos_2;       //!< data for silos 2
    public:
        Data(){};
        void data_normalizer_1();
        void data_normalizer_2();
        void set_data(std::vector<uint16_t> _data);
        std::array<double, 5> get_data_silos_1();
        std::array<double, 5> get_data_silos_2();

};