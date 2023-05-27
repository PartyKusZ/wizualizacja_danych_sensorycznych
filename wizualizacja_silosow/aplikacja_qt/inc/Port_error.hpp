#pragma once


#include "Serial_port.hpp"


/**
 * @brief class handling the exception thrown when attempting to open an incorrect port
 * 
 */
class Port_error{
    private:
        
        Serial_port *port; //!< Serial port
        const char PATHS[1][200] = {"/dev/serial/by-id/usb-Arduino__www.arduino.cc__0043_85830303439351E0E151-if00"}; //!< path to another device



    public:
        Port_error();
        void operator()(Serial_port *_port);
        ~Port_error();

};