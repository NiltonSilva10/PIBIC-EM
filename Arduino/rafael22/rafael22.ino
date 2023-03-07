int POT =A1;
int LED = 9;
int valor = 0;

void setup(){
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}
void loop(){

  valor = analogRead(POT);
  if(valor > 0){
    analogWrite(LED,(valor /4));
    Serial.println(valor);

  }
}

