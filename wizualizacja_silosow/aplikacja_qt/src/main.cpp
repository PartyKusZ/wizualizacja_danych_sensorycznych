#include <QApplication>
#include <iostream>
#include <thread>
#include "Main_window.hpp"
#include "Serial_port.hpp"
#include "Data.hpp"
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Serial_port serial_port;
    Data data;
    std::thread data_reciver(&Serial_port::get_data,&serial_port,&data);
    Main_window main_window(nullptr,&data);
    main_window.show();
    return app.exec();
}



 // Serial_port serial;
    // while(1){
    //     auto x = serial.get_data();
    //     for (auto &&i : x)
    //     {
    //         std::cout << i << std::endl;
    //     }
        
    // }