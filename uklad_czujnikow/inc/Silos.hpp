#pragma once

#include "DHT.hpp"
#include "HCSR04.hpp"

class Silos{

    private:
        int num_of_dht;
        int num_of_hcsr04;
        DHT *dht_tab;
        HCSR04 *hcsr04_tab;
    public:
        Silos(const int &_num_of_dht,const int &_num_of_hcsr04);
        void set_gpio(int *dht_pins, int *hcsr04_pins);

        
};
