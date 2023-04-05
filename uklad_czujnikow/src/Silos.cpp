#include "../inc/Silos.hpp"

Silos::Silos(const int &_num_of_dht,const int &_num_of_hcsr04): num_of_dht(_num_of_dht), num_of_hcsr04(_num_of_hcsr04) {
    dht_tab = new DHT[num_of_dht];
    hcsr04_tab = new HCSR04[num_of_hcsr04];
}

void Silos::set_gpio(int *dht_pins, int *hcsr04_pins){
    for(int i = 0; i < num_of_dht; i++){
        dht_tab[i].setup(dht_pins[i]);
    }
    for(int i = 0, j = 0; j < num_of_hcsr04; i+=2, ++j){
        hcsr04_tab[j].setup(hcsr04_pins[i],hcsr04_pins[i + 1]);
    }
}