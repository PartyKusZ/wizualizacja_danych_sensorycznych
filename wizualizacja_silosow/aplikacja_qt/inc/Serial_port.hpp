#pragma once
#include <vector>
#include <libserial/SerialPort.h>
#include <libserial/SerialPortConstants.h>
#include "FastCRC.hpp"

/**
 * @brief A class that receives data from the serial port and interprets it
 * 
 *
 * 
 */

class Serial_port: private LibSerial::SerialPort, public FastCRC8{

    private:
        constexpr static uint16_t START = 0xFF; // data frame start byte value 
        constexpr static uint8_t DATA_SIZE = 12; // amount of bytes excluded start byte
        constexpr static uint8_t READY_DATA_SIZE = 5; // amount of ready data
        constexpr static char path[] = "/dev/ttyACM0"; 
        uint8_t start; // for start byte
        std::vector<uint8_t> data; // for 12 bytes after start byte
        std::vector<uint16_t> ready_data; // for ready data 
    public:

        Serial_port();
        std::vector<uint16_t> get_data(); // returns vector of read data : filling, temp1, temp2, humidity1, humidity2

};