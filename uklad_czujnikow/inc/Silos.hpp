#pragma once
#include "../inc/DHT.hpp"
#include "../inc/HCSR04.hpp"

class Silos{

    private:
        DHT dht_0;
        DHT dht_1;
        HCSR04 hcsr04;
        int  height_of_silos;
    public:

        uint16_t  get_volume();
        uint16_t  get_temperature_0();
        uint16_t  get_temperature_1();
        uint16_t  get_humidity_0();
        uint16_t  get_humidity_1();
        Silos();
        void setup(int *dht_pins, int *hcsr04_pins,int _height_of_silos);
        uint16_t *get_data();
};
