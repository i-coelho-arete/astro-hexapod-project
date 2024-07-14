#include <Servo.h>

// Explicação inicial:
// Este código controla um robô quadrúpede utilizando servos. Utilizamos arrays para armazenar
// os ângulos dos servos e loops para percorrer esses arrays, ajustando as posições dos servos.

Servo servoUpperRightPaw;   // Pata superior direita [GPIO14]
Servo servoUpperRightArm;   // Braço superior direito [GPIO12]
Servo servoLowerRightArm;   // Braço inferior direito [GPIO13]
Servo servoLowerRightPaw;   // Pata inferior direita [GPIO15]
Servo servoUpperLeftPaw;    // Pata superior esquerda [GPIO16]
Servo servoUpperLeftArm;    // Braço superior esquerdo [GPIO5]
Servo servoLowerLeftArm;    // Braço inferior esquerdo [GPIO4]
Servo servoLowerLeftPaw;    // Pata inferior esquerda [GPIO2]

void setup() {
  Serial.begin(115200);  // Inicia a comunicação serial para debug

  // Anexamos cada servo a um pino específico na placa ESP8266
  servoUpperRightPaw.attach(14);  // Conecta o servo da pata superior direita ao pino GPIO 14
  servoUpperRightArm.attach(12);  // Conecta o servo do braço superior direito ao pino GPIO 12
  servoLowerRightArm.attach(13);  // Conecta o servo do braço inferior direito ao pino GPIO 13
  servoLowerRightPaw.attach(15);  // Conecta o servo da pata inferior direita ao pino GPIO 15
  servoUpperLeftPaw.attach(16);   // Conecta o servo da pata superior esquerda ao pino GPIO 16
  servoUpperLeftArm.attach(5);    // Conecta o servo do braço superior esquerdo ao pino GPIO 5
  servoLowerLeftArm.attach(4);    // Conecta o servo do braço inferior esquerdo ao pino GPIO 4
  servoLowerLeftPaw.attach(2);    // Conecta o servo da pata inferior esquerda ao pino GPIO 2

  // Ajustar para a posição central apenas uma vez no início
  ajustarPosicao(0); // Posição central
  delay(1000); // Espera 1 segundo
}

// Criamos uma matriz que armazena os ângulos dos servos para diferentes posições
// A matriz tem 3 linhas (diferentes posições) e 8 colunas (um ângulo para cada servo)
int servoPositions[3][8] = {
//G14, G12, G13, G15, G16, G5,  G4,  G2
  {90,  90,  90, 140,  40,  90,  90,  90}, // Posição central 
  {70,  90,  90, 110, 110,  90,  90,  70}, // Posição um pouco acima do solo
  {60,  90,  90, 130, 130,  90,  90,  60}, // Posição de standby
};

// Função que ajusta os servos para as posições definidas na matriz
void ajustarPosicao(int posicao) {
  // Verificamos se a posição é válida (entre 0 e 2)
  if (posicao < 0 || posicao > 2) {
    Serial.println("Posição inválida!");
    return;
  }
  
  // Ajustamos cada servo para o ângulo correspondente na linha da matriz especificada por 'posicao'
  servoUpperRightPaw.write(servoPositions[posicao][0]); // Define o ângulo do servo da pata superior direita
  servoUpperRightArm.write(servoPositions[posicao][1]); // Define o ângulo do servo do braço superior direito
  servoLowerRightArm.write(servoPositions[posicao][2]); // Define o ângulo do servo do braço inferior direito
  servoLowerRightPaw.write(servoPositions[posicao][3]); // Define o ângulo do servo da pata inferior direita
  servoUpperLeftPaw.write(servoPositions[posicao][4]);  // Define o ângulo do servo da pata superior esquerda
  servoUpperLeftArm.write(servoPositions[posicao][5]);  // Define o ângulo do servo do braço superior esquerdo
  servoLowerLeftArm.write(servoPositions[posicao][6]);  // Define o ângulo do servo do braço inferior esquerdo
  servoLowerLeftPaw.write(servoPositions[posicao][7]);  // Define o ângulo do servo da pata inferior esquerda
  delay(500); // Espera pelo tempo especificado para permitir que os servos alcancem a posição
}

// Função principal que é executada repetidamente
void loop() {
  // Chamamos a função ajustarPosicao para ajustar os ângulos dos servos para diferentes posições
  ajustarPosicao(1); // Posição um pouco acima do solo
  delay(1000); // Espera 1 segundo
  ajustarPosicao(2); // Posição de standby
  delay(1000); // Espera 1 segundo
}
