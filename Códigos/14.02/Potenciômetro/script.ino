// https://www.tinkercad.com/things/0yv8G7zSOyv-stunning-waasa/editel?sharecode=0P6Y515xRzuTvg5BHtig_MuuKaRUG9Hrx6iq9mF1yu0
//

int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(10); // Delay a little bit to improve simulation performance
}
