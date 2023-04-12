#pragma once
#include "../inc/DHT.hpp"
#include "../inc/HCSR04.hpp"

class Silos{

    private:
        DHT dht_0;             // czujnik temp i wilgotności
        DHT dht_1;             // czujnik temp i wilgotności
        HCSR04 hcsr04;         //czujnik odległości
        int  height_of_silos;  // wykokość silosa 
        uint16_t data[5];      // tablica przechowująca wszystkie dane 
    public:

        uint16_t  get_volume();         // zwraca wypełnienie silosa w [%]
        uint16_t  get_temperature_0();  // zwraca temperature
        uint16_t  get_temperature_1();  // zwraca temperature
        uint16_t  get_humidity_0();     // zwraca wilgotość 
        uint16_t  get_humidity_1();     // zwraca wilgotość 
        Silos();
        void setup(int *dht_pins, int *hcsr04_pins,int _height_of_silos);    // tablica pinów dla czujników dht11, tablica pinów da czujnika hcsr04, wysokość silosa
        uint16_t *get_data();        // zwraca wskaźnik do tablicy przechowującej wszystkie dane
};
