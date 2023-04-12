#include "../inc/Data.hpp"

Data::Data(): FastCRC8() {};

void Data::set_volume(uint16_t volume){
    byte first = (byte)(volume >> 8);         // przypisuje do pomocniczej zmiennej 8 najstarszych bitów
    byte second = (byte)(volume & 0xFF);      // przypisuje do pomocniczej zmiennej 8 najmłodszych bitów 
    this->data_frame[1] = first;              // wpisanie danych do odpowienich miejsc w tablicy ramki 
    this->data_frame[2] = second;

}
void Data::set_temperature_0(uint16_t temp){            
    byte first = (byte)(temp >> 8);         // przypisuje do pomocniczej zmiennej 8 najstarszych bitów  
    byte second = (byte)(temp & 0xFF);      // przypisuje do pomocniczej zmiennej 8 najmłodszych bitów         
    this->data_frame[3] = first;            // wpisanie danych do odpowienich miejsc w tablicy ramki 
    this->data_frame[4] = second;
}
void Data::set_temperature_1(uint16_t temp){
    byte first = (byte)(temp >> 8);     // przypisuje do pomocniczej zmiennej 8 najstarszych bitów        
    byte second = (byte)(temp & 0xFF);  // przypisuje do pomocniczej zmiennej 8 najmłodszych bitów     
    this->data_frame[5] = first;        // wpisanie danych do odpowienich miejsc w tablicy ramki 
    this->data_frame[6] = second;
}
void Data::set_humidity_0(uint16_t humidity){
    byte first = (byte)(humidity >> 8);     // przypisuje do pomocniczej zmiennej 8 najstarszych bitów
    byte second = (byte)(humidity & 0xFF);  // przypisuje do pomocniczej zmiennej 8 najmłodszych bitów 
    this->data_frame[7] = first;            // wpisanie danych do odpowienich miejsc w tablicy ramki 
    this->data_frame[8] = second;
}
void Data::set_humidity_1(uint16_t humidity){
    byte first = (byte)(humidity >> 8);     // przypisuje do pomocniczej zmiennej 8 najstarszych bitów
    byte second = (byte)(humidity & 0xFF);  // przypisuje do pomocniczej zmiennej 8 najmłodszych bitów 
    this->data_frame[9] = first;            // wpisanie danych do odpowienich miejsc w tablicy ramki 
    this->data_frame[10] = second;
}
byte *Data::get_data_frame(){
    this->data_frame[0] = START; // pisanie bajtu startowego do pierwszego elementu tablicy 
    this->set_volume(this->data[0]);      
    this->set_temperature_0(this->data[1]);
    this->set_temperature_1(this->data[2]);
    this->set_humidity_0(this->data[3]);
    this->set_humidity_1(this->data[4]);
    this->data_frame[11] = this->smbus(data_frame + 1, 10); // obliczenie sumy kontrlonej dla 10 bajtów reprezentujących dane 
    this->data_frame[12] = STOP; // wpisanie znaku stop do ostatniego elementu ramki 
    return this->data_frame;     // zwrócenie ramki 
}

void Data::set_data(uint16_t *_data){
    this->data = _data;
}

