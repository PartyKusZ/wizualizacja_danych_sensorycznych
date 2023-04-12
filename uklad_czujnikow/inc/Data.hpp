#pragma once    
#include <Arduino.h>
#include "../inc/FastCRC.h"
#define START 0xFF
#define STOP 0xFE
class Data: private FastCRC8{

    private:
        uint16_t *data;                             // przechowuje tablice danych, z ktorych powstanie ramka
        byte data_frame[13];                        // przechowuje skonstruowaną ramkę
        void set_volume(uint16_t volume);           // konweruje daną wejścią na 2 dane typu byte i wpisuje w odpowiednie miejsce w tablicy data_frame 
        void set_temperature_0(uint16_t temp);      // konweruje daną wejścią na 2 dane typu byte i wpisuje w odpowiednie miejsce w tablicy data_frame 
        void set_temperature_1(uint16_t temp);      // konweruje daną wejścią na 2 dane typu byte i wpisuje w odpowiednie miejsce w tablicy data_frame 
        void set_humidity_0(uint16_t humidity);     // konweruje daną wejścią na 2 dane typu byte i wpisuje w odpowiednie miejsce w tablicy data_frame 
        void set_humidity_1(uint16_t humidity);     // konweruje daną wejścią na 2 dane typu byte i wpisuje w odpowiednie miejsce w tablicy data_frame 
    
    public:
        Data();
        void set_data(uint16_t *_data);             // pobiera tablice danych z ktorych powstanie ramka 
        byte  *get_data_frame();                    // zwraca gotową ramkę 

    
};