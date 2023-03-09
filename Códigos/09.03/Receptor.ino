// https://www.tinkercad.com/things/f46tBb8ZF5N-bodacious-jaban/editel?sharecode=y_1Iw6St5IwuMT6UqVWzy45hiNdXHPT4zz2eEVdVq8Y

const int pinoLed = 10; //PINO DIGITAL UTILIZADO PELO LED
const int pinoLDR = A5; //PINO ANALÓGICO UTILIZADO PELO LDR
const int LDRSol = A4;  //Pino que recebe valor da luz solar
  
void setup(){  
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoLDR, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(LDRSol, INPUT);
  Serial.begin(9600);
}    
void loop(){
  //O VALOR 600 PODE SER AJUSTADO
  Serial.println(analogRead(pinoLDR));
  if((analogRead(LDRSol) - analogRead(pinoLDR) > 600)){ //SE O VALOR LIDO FOR MAIOR QUE 600, FAZ
    digitalWrite(pinoLed, HIGH); //ACENDE O LED
    tone(10, 523, 100);
  }  
  else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
  }  
}
