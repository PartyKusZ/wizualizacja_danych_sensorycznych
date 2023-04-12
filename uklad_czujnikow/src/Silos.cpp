#include "../inc/Silos.hpp"

Silos::Silos() {
 //hcsr04.setup(hcsr04_pins[0],hcsr04_pins[1]);
 //dht[0].setup(dht_pins[0]);
 //dht[1].setup(dht_pins[1]);
}

void Silos::setup(int *dht_pins, int *hcsr04_pins,int _height_of_silos){

 hcsr04.setup(hcsr04_pins[0],hcsr04_pins[1]);
 dht_0.setup(dht_pins[0]);
 dht_1.setup(dht_pins[1]);


  height_of_silos = _height_of_silos;
}

uint16_t Silos::get_volume(){ // zwraca wypełnienie w [%] 
  int volume = hcsr04.dist() / this->height_of_silos * 100; 
  return (volume < 100) ? volume : 100;  // jeśli obliczone wypełnienie byłoby wieksze to i tak zwróc 100 %
}

uint16_t Silos::get_temperature_0(){
  return dht_0.getTemperature() * 10;
}


uint16_t Silos::get_temperature_1(){
  return dht_1.getTemperature() * 10;
}


uint16_t Silos::get_humidity_0(){
  return dht_0.getHumidity() * 10;
}


uint16_t Silos::get_humidity_1(){
  return dht_1.getHumidity() * 10;
}

uint16_t *Silos::get_data(){
  this->data[0] = this->get_volume(); 
  this->data[1] = this->get_temperature_0();
  this->data[2] = this->get_temperature_1(); 
  this->data[3] = this->get_humidity_0();
  this->data[4] = this->get_humidity_1(); 
  return data;
  
}