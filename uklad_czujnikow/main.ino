#include "inc/DHT.hpp"
#include "inc/HCSR04.hpp"
#include "inc/Silos.hpp"
#include "inc/Data.hpp"
#define SILOS_1 0xFE
#define SILOS_2 0xFD


int tab[] = {2,3};
int tab2[] = {6,4};
byte *data_test;
Silos silos;
Data data(SILOS_1);

void setup()
{
  Serial.begin(9600);
  silos.setup(tab,tab2,20);
  //data_test = data.get_data_frame();
}

void loop()
{

    data.set_data(silos.get_data());
    data_test = data.get_data_frame();
    Serial.write(data_test,13);
    delay(500);
  
 


  

}