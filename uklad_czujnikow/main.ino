#include "inc/DHT.hpp"
#include "inc/HCSR04.hpp"
#include "inc/Silos.hpp"
#include "inc/Data.hpp"

int tab[] = {2,3};
int tab2[] = {6,4};
byte *data_test;
Silos silos;
Data data;

void setup()
{
  Serial.begin(9600);
  silos.setup(tab,tab2,10);
  //data_test = data.get_data_frame();
}

void loop()
{


  // Serial.println("Objetość[\%]: ");
  // Serial.println(silos.get_volume());

  // Serial.println("Temperatura_0[C]: ");
  // Serial.println(silos.get_temperature_0());
  // Serial.println("Temperatura_1[C]: ");
  // Serial.println(silos.get_temperature_1());
  // Serial.println("Wilgotność_0[\%]: ");
  // Serial.println(silos.get_humidity_0());
  // Serial.println("Wilgotność_1[\%]: ");
  // Serial.println(silos.get_humidity_1());
  // Serial.println("test data: ");
  // delay(2000);

  //Serial.println(data_test[0]);
  
 

    data.set_data(silos.get_data());

    data_test = data.get_data_frame();
    // for(int i = 0; i < 13;++i){
    //   Serial.println(data_test[i]);
    // }
    Serial.write(data_test,13);
    //Serial.flush();
    //Serial.println(sizeof(data.get_data_frame()));
    
    delay(500);
  
 


  

}