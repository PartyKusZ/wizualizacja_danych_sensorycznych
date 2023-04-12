#pragma once    
#include <Arduino.h>
#include "../inc/FastCRC.h"
#define START 0xAA
#define STOP 0xBB
class Data: private FastCRC8{

    private:
        uint16_t *data;
        byte data_frame[13];
        void set_volume(int volume);
        void set_temperature_0(int temp);
        void set_temperature_1(int temp);
        void set_humidity_0(int humidity);
        void set_humidity_1(int humidity);
    
    public:
        Data();
        void set_data(uint16_t *_data);
        byte  *get_data_frame();

    
};