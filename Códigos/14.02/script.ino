// https://www.tinkercad.com/things/2gPNFAAz5EI-grand-albar-vihelmo/editel?sharecode=7CT3LQQ9OpbWKJw8ij7f5zwMQZ8z_uHwwdAgsDs2qbY

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

int sensorValue = 0;

// Usamos aqui a distância de forma estática
double distanceM = 5;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  led_display1.begin(112);  
}

void loop()
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  // print out the value you read:
  //Serial.println(sensorValue);
  led_display1.println(sensorValue);
  
  led_display1.writeDisplay();
  delay(100); // Wait for 100 millisecond(s)
}
