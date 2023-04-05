#include "inc/DHT.hpp"
#include "inc/HCSR04.hpp"
#include "inc/Silos.hpp"

DHT dht;
HCSR04 dist;

Silos silos(1,1);

int tab[] = {1};
int tab2[] = {5,4};

void setup()
{
  Serial.begin(9600);

  dht.setup(2); // data pin 2
  silos.set_gpio(tab,tab2);
 //dist.setup(5,4);
}

void loop()
{
  delay(dht.getMinimumSamplingPeriod());
  Serial.print("wilgotnosc: ");
  Serial.print(dht.getHumidity());
  Serial.print("\n");
  Serial.print("Temperatura: ");
  Serial.print(dht.getTemperature());
  Serial.print("\n");
  Serial.print("Odległosc: ");
  Serial.print(dist.dist());
  Serial.print("\n");

  

}