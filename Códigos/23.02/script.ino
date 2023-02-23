// https://www.tinkercad.com/things/d3NrLzh35l8-tremendous-allis-kup/editel?sharecode=jPVT5Noy59zd0QazSsN2Iq-wXeIR0A180T2tborTh-w
// C++ code
//
/*
  AnalogReadSerial
  Reads an analog input (potentiometer) on pin 0,
  prints the result to the serial monitor.

  OPEN THE SERIAL MONITOR TO VIEW THE OUTPUT FROM
  THE POTENTIOMETER >>

  Attach the center pin of a potentiometer to pin
  A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

int sensorValue = 0;
int sensorVa = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  sensorVa = analogRead (A1);
  // print out the value you r
  Serial.println(sensorValue);
  
 Serial.println(sensorVa);


  
  delay(10); // Delay a little bit to improve simulation performance
}
