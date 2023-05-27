#include "Port_error.hpp"

Port_error::Port_error(){
}
/**
 * @brief opens new port 
 * 
 * @param port 
 */
void Port_error::operator()(Serial_port *port){
    port = new Serial_port(PATHS[0]);
}

Port_error::~Port_error(){
}
