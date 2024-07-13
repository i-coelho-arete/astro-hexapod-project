/*
  ESP8266_LED_Blink_With_Custom_Pin - Piscar um LED em um Pino Personalizado no ESP8266

  Este sketch faz um LED conectado a um pino específico do ESP8266 piscar em um padrão controlado por variáveis.
  Aqui, introduzimos a noção de pinos GPIO e como utilizá-los.

  Nota: Certifique-se de conectar um LED com um resistor apropriado ao pino especificado.
*/

// Definição do pino ao qual o LED está conectado
const int ledPin = 2;  // Pino GPIO 2 (D4 no NodeMCU)

// Declaração das variáveis para controlar os tempos de ligar e desligar o LED
int ledOnTime = 1000;  // Tempo em milissegundos que o LED permanece ligado
int ledOffTime = 2000; // Tempo em milissegundos que o LED permanece desligado

void setup() {
  // Configura o pino do LED como uma saída
  pinMode(ledPin, OUTPUT);
  
  // Mensagem opcional para debug, inicializa a comunicação serial (descomentar se necessário)
  // Serial.begin(115200);
  // Serial.println("Inicialização completa. O ESP8266 está pronto para piscar o LED em um pino personalizado!");
}

void loop() {
  // Liga o LED (LOW é o nível de tensão, mas o LED está ligado, pois é ativo em nível baixo)
  digitalWrite(ledPin, LOW);
  
  // Espera pelo tempo definido na variável ledOnTime
  delay(ledOnTime);
  
  // Desliga o LED (HIGH é o nível de tensão, o LED está desligado)
  digitalWrite(ledPin, HIGH);
  
  // Espera pelo tempo definido na variável ledOffTime
  delay(ledOffTime);
}
