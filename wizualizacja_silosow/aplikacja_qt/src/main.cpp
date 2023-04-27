#include <QApplication>
#include "Main_window.hpp"
// #include "Serial_port.hpp"
// #include <vector>
#include <iostream>
#include "Data.hpp"
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    Main_window main_window;
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