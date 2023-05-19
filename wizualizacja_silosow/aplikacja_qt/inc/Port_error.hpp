#pragma once


#include "Serial_port.hpp"



class Port_error{
    private:
        
        Serial_port *port;
        const char PATHS[1][200] = {"/dev/serial/by-id/usb-Arduino__www.arduino.cc__0043_85830303439351E0E151-if00"};



    public:
        Port_error();
        void operator()(Serial_port *_port);
        ~Port_error();

};