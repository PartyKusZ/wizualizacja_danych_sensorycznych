#include "inc/DHT.hpp"
#include "inc/HCSR04.hpp"
#include "inc/Silos.hpp"
#include "inc/Data.hpp"
#define SILOS_1 0xFE
#define SILOS_2 0xFD


int tab_1[] = {2,3};
int tab2_1[] = {6,4};
int tab_2[] = {8,9};
int tab2_2[] = {13,12};

byte *data_test;
Silos silos_1;
Silos silos_2;
Data data_1(SILOS_1);
Data data_2(SILOS_2);


void setup()
{
  Serial.begin(9600);
  silos_1.setup(tab_1,tab2_1,20);
  silos_2.setup(tab_2,tab2_2,20);
  //data_test = data.get_data_frame();
}

void loop()
{

    data_1.set_data(silos_1.get_data());
    data_2.set_data(silos_2.get_data());
    data_test = data_1.get_data_frame();
    Serial.write(data_test,13);
    delay(100);
    data_test = data_2.get_data_frame();
    Serial.write(data_test,13);
    delay(100);

  
 


  

}