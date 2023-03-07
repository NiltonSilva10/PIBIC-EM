/* LED Pulsante
// Controlar a luminosidade de um LED  através da saída PWM
// Conectar o LED através de um resistor de 220 ohms ao GND

int LED = 9;
float seno;
int intensidade;
void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  for(int i = 0; i < 180; i++){
    seno = sin(i * (3.141592654 / 180));
    intensidade = int(seno * 255);
    analogWrite (LED, intensidade);
    delay (25);
  }
}*/
