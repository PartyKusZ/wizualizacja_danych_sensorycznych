#include <iostream>
#include <libserial/SerialPort.h>
#include <libserial/SerialPortConstants.h>
#include <unistd.h>
#include <cstdint>
#include "FastCRC.h"
using namespace LibSerial;
using namespace std;


int main(int argc, char *argv[]) {
    FastCRC8 crc8;
    

    SerialPort serial("/dev/ttyACM0");
    serial.SetBaudRate(BaudRate::BAUD_9600);
    serial.SetCharacterSize( CharacterSize::CHAR_SIZE_8 );
    serial.SetStopBits(StopBits::STOP_BITS_1 );
    serial.SetParity(Parity::PARITY_NONE);
    serial.SetFlowControl(FlowControl::FLOW_CONTROL_NONE);

    usleep(2000000);

    //serial.WriteByte('s');
    //usleep(2000000);

      uint8_t start;  
      DataBuffer data;


     while(true){
         serial.ReadByte(start);
         if(start == 0xFF){
            serial.Read(data,12);

            uint16_t data1 = (data[0] << 8) | data[1];
            uint16_t data2 = (data[2] << 8) | data[3];
            uint16_t data3 = (data[4] << 8) | data[5];
            uint16_t data4 = (data[6] << 8) | data[7];
            uint16_t data5 = (data[8] << 8) | data[9];
            uint16_t crc = data[10];
            uint16_t stop = data[11];

            std::cout << "start: " << static_cast<uint16_t>(start) << std::endl;
            std::cout << "Data1: " << data1 << ", Data2: " << data2
                                << ", Data3: " << data3 << ", Data4: " << data4
                                << ", Data5: " << data5 << std::endl;
            
            std::cout <<((crc8.smbus(data.data(), 10 ) ==  crc) ? "sumy konrtolne OK" : "sumy konrtolne NIE OK") << std::endl;
            std::cout <<"stop"<< stop<<std::endl;
         }

         
        //usleep(1500000);
     }
    

}


    // Odczytujemy 13 bajtów z portu
    // while(true){
    //     sleep(1);
    //     write(port,boost::asio::buffer(&s,1));
    //     read(port, boost::asio::buffer(data, 13));
    //     uint16_t data1 = (data[1] << 8) | data[2];
    //     uint16_t data2 = (data[3] << 8) | data[4];
    //     uint16_t data3 = (data[5] << 8) | data[6];
    //     uint16_t data4 = (data[7] << 8) | data[8];
    //     uint16_t data5 = (data[9] << 8) | data[10];
    //    // uint16_t start = data[0];
    //    // std::cout << "start" << start << std::endl;
    //     std::cout << "Data1: " << data1 << ", Data2: " << data2
    //                           << ", Data3: " << data3 << ", Data4: " << data4
    //                           << ", Data5: " << data5 << std::endl;
      

    // }

    // Wyświetlamy odczytane dane na ekranie
   // std::cout << "Odczytane dane: " << std::string(data, 13) << std::endl;


