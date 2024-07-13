#include <Servo.h>  // Inclui a biblioteca Servo

Servo myservo;  // Cria um objeto servo para controlar um servo

// Definição dos ângulos mínimos e máximos
const int minAngle = 10;  // Ângulo mínimo
const int maxAngle = 170; // Ângulo máximo

void setup() {
  // Anexa o servo ao pino GPIO2 (D4 no NodeMCU)
  myservo.attach(D4);
  
  // Mensagem opcional para debug, inicializa a comunicação serial (descomentar se necessário)
  // Serial.begin(115200);
  // Serial.println("Inicialização completa. O ESP8266 está pronto para controlar o servo!");
}

void loop() {
  // Move o servo continuamente de minAngle a maxAngle e vice-versa
  moveServo(minAngle, maxAngle, 15);
}

// Função para mover o servo de minAngle a maxAngle e vice-versa
void moveServo(int minAngle, int maxAngle, int delayTime) {
  int pos;  // Variável para armazenar a posição do servo
  
  // Move o servo de minAngle a maxAngle
  for (pos = minAngle; pos <= maxAngle; pos++) {
    myservo.write(pos);  // Define a posição do servo na variável 'pos'
    delay(delayTime);  // Aguarda delayTime ms para que o servo alcance a posição
  }

  // Move o servo de maxAngle a minAngle
  for (pos = maxAngle; pos >= minAngle; pos--) {
    myservo.write(pos);  // Define a posição do servo na variável 'pos'
    delay(delayTime);  // Aguarda delayTime ms para que o servo alcance a posição
  }
}
