#include "Serial_port.hpp"

Serial_port::Serial_port(): LibSerial::SerialPort(path), FastCRC8(){

    this->SetBaudRate(LibSerial::BaudRate::BAUD_9600);
    this->SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8 );
    this->SetStopBits(LibSerial::StopBits::STOP_BITS_1 );
    this->SetParity(LibSerial::Parity::PARITY_NONE);
    this->SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE);

};

std::vector<uint16_t> Serial_port::get_data() {
    uint16_t crc;
    this->ReadByte(this->start);
    if(this->start == this->START){
        this->Read(this->data,this->DATA_SIZE);
        for(int i = 0, j = 0; i < this->READY_DATA_SIZE; ++i, j += 2){
            this->ready_data.push_back(static_cast<uint16_t>(this->data[j] << 8 | this->data[j + 1]));
        }
        crc = this->data[10];
        if(this->smbus(this->data.data(), 10) == crc){
            return this->ready_data;
        }else{
            this->ready_data.clear();
            return this->ready_data;
        }
    }
}