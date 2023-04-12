#include "../inc/Data.hpp"

Data::Data(): FastCRC8() {};

void Data::set_volume(int volume){
    byte first = (byte)(volume >> 8);
    byte second = (byte)(volume & 0xFF);
    this->data_frame[1] = first;
    this->data_frame[2] = second;

}
void Data::set_temperature_0(int temp){
    byte first = (byte)(temp >> 8);
    byte second = (byte)(temp & 0xFF);
    this->data_frame[3] = first;
    this->data_frame[4] = second;
}
void Data::set_temperature_1(int temp){
    byte first = (byte)(temp >> 8);
    byte second = (byte)(temp & 0xFF);
    this->data_frame[5] = first;
    this->data_frame[6] = second;
}
void Data::set_humidity_0(int humidity){
    byte first = (byte)(humidity >> 8);
    byte second = (byte)(humidity & 0xFF);
    this->data_frame[7] = first;
    this->data_frame[8] = second;
}
void Data::set_humidity_1(int humidity){
    byte first = (byte)(humidity >> 8);
    byte second = (byte)(humidity & 0xFF);
    this->data_frame[9] = first;
    this->data_frame[10] = second;
}
byte *Data::get_data_frame(){
    this->data_frame[0] = START;
    this->set_volume(this->data[0]);
    this->set_temperature_0(this->data[1]);
    this->set_temperature_1(this->data[2]);
    this->set_humidity_0(this->data[3]);
    this->set_humidity_1(this->data[4]);
    this->data_frame[11] = this->smbus(data_frame + 1, 10);
    this->data_frame[12] = STOP;
    return this->data_frame;
}

void Data::set_data(uint16_t *_data){
    this->data = _data;
}

