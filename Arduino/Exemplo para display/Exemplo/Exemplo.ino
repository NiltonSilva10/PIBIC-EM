// Projeto Cronômetro com Arduino e Display TM1637
// Visite nosso site e confira nossa diversidade de produtos
// Link da Loja: www.usinainfo.com.br

#include "TM1637Display.h" // Inclui a biblioteca TM1637Display

#define CLK 2 // Define pino 2 como CLK
#define DIO 3 // Define pino 3 como DIO

// Para configurações personalizadas junto ao display de 7 segmentos
// utiliza-se o seguinte esquema, no qual cada letra representa um segmento:

//      -         A
//    |   |     F   B
//      -         G
//    |   |     E   C
//      -         D

// Segue abaixo exemplo de nomeação para o anagrama US12,
// em comemoração aos 12 anos da usinainfo, veja:

const uint8_t US12[] = {
  SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,          // U
  SEG_A | SEG_F | SEG_G | SEG_C | SEG_D,          // S
  SEG_B | SEG_C,                                  // 1
  SEG_A | SEG_B | SEG_G | SEG_E | SEG_D,          // 2
};


// Cria uma variável de exibição na biblioteca TM1637
TM1637Display display(CLK, DIO);

void setup() {

// Ajusta a iluminação no tempo x em milisegundos
display.setBrightness(10);
// Imprime o anagrama US12 na tela do display
display.setSegments(US12);
delay(1000);
}

void loop() {

// Cria Variável para armazenar caractere
uint8_t position[] = { 0, 0, 0, 0 };

// Armazena em segundos o tempo ligado do Arduino
long cas = millis() / 1000;

// Calculo individual para posição no display
position[0] = display.encodeDigit((cas / 60) / 10); // Dezena de minuto
position[1] = display.encodeDigit((cas / 60) % 10); // Unidade de minuto
position[2] = display.encodeDigit((cas % 60) / 10); // Dezena de segundo
position[3] = display.encodeDigit((cas % 60) % 10); // Unidade de segundo

//Organiza as informações do display
display.setSegments(position);
delay(500);

// Variável para inclusão do sinal ":" entre min e seg
position[1] = position[1] + 128;
display.setSegments(position);
delay(500);
}
