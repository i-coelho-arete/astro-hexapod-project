#include <Servo.h>  // Inclui a biblioteca Servo

Servo myservo;  // Cria um objeto servo para controlar um servo
int pos = 0;  // Variável para armazenar a posição do servo

void setup() {
  myservo.attach(D4);  // Anexa o servo ao pino GPIO2 (D4 no NodeMCU)
  
  // Mensagem opcional para debug, inicializa a comunicação serial (descomentar se necessário)
  // Serial.begin(115200);
  // Serial.println("Inicialização completa. O ESP8266 está pronto para controlar o servo!");
}

void loop() {
  // Move o servo de 10 a 170 graus
  for (pos = 10; pos <= 170; pos += 1) {
    myservo.write(pos);  // Define a posição do servo na variável 'pos'
    delay(15);  // Aguarda 15ms para que o servo alcance a posição
  }

  // Move o servo de 170 a 10 graus
  for (pos = 170; pos >= 10; pos -= 1) {
    myservo.write(pos);  // Define a posição do servo na variável 'pos'
    delay(15);  // Aguarda 15ms para que o servo alcance a posição
  }
}
