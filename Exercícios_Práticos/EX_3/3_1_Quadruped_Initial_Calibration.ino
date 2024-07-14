#include <Servo.h>  // Importa a biblioteca de servos

// Criação das variáveis dos oito servos, cada uma controlando uma parte específica do robô
Servo servoUpperRightPaw;  // Pata superior direita [GPIO14]
Servo servoUpperRightArm;  // Braço superior direito [GPIO12]
Servo servoLowerRightArm;  // Braço inferior direito [GPIO13]
Servo servoLowerRightPaw;  // Pata inferior direita [GPIO15]
Servo servoUpperLeftPaw;   // Pata superior esquerda [GPIO16]
Servo servoUpperLeftArm;   // Braço superior esquerdo [GPIO5]
Servo servoLowerLeftArm;   // Braço inferior esquerdo [GPIO4]
Servo servoLowerLeftPaw;   // Pata inferior esquerda [GPIO2]

void setup() {
  // Inicializa os pinos GPIO de cada servo
  servoUpperRightPaw.attach(14);  // Conecta o servo da pata superior direita ao pino GPIO 14
  servoUpperRightArm.attach(12);  // Conecta o servo do braço superior direito ao pino GPIO 12
  servoLowerRightArm.attach(13);  // Conecta o servo do braço inferior direito ao pino GPIO 13
  servoLowerRightPaw.attach(15);  // Conecta o servo da pata inferior direita ao pino GPIO 15
  servoUpperLeftPaw.attach(16);   // Conecta o servo da pata superior esquerda ao pino GPIO 16
  servoUpperLeftArm.attach(5);    // Conecta o servo do braço superior esquerdo ao pino GPIO 5
  servoLowerLeftArm.attach(4);    // Conecta o servo do braço inferior esquerdo ao pino GPIO 4
  servoLowerLeftPaw.attach(2);    // Conecta o servo da pata inferior esquerda ao pino GPIO 2

  // Chama a função de calibração para definir a posição inicial dos servos
  calibrarPosicaoInicial();
}

void calibrarPosicaoInicial() {
  // Define a função de calibração
  // Ajusta cada servo para sua posição "zero" ou posição inicial
  servoUpperRightPaw.write(135);  // Define a posição do servo da pata superior direita para 135°
  servoUpperRightArm.write(45);   // Define a posição do servo do braço superior direito para 45°
  servoLowerRightArm.write(135);  // Define a posição do servo do braço inferior direito para 135°
  servoLowerRightPaw.write(45);   // Define a posição do servo da pata inferior direita para 45°
  servoUpperLeftPaw.write(45);    // Define a posição do servo da pata superior esquerda para 45°
  servoUpperLeftArm.write(135);   // Define a posição do servo do braço superior esquerdo para 135°
  servoLowerLeftArm.write(45);    // Define a posição do servo do braço inferior esquerdo para 45°
  servoLowerLeftPaw.write(135);   // Define a posição do servo da pata inferior esquerda para 135°
}

void loop() {
  // O loop está vazio porque a calibração da posição inicial é feita apenas uma vez no setup
}
