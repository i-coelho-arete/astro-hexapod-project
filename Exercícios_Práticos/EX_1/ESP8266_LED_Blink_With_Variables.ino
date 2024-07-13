/*
  ESP8266_LED_Blink_With_Variables - Piscar o LED Integrado no ESP8266 com Variáveis

  Este sketch faz o LED azul integrado no módulo ESP-01 piscar em um padrão específico usando variáveis para controlar os tempos de ligar e desligar.
  O LED azul no módulo ESP-01 está conectado ao GPIO1, que também é o pino TXD.
  Nota: Não podemos usar Serial.print() ao mesmo tempo que utilizamos o LED integrado.
*/

// Declaração das variáveis para controlar os tempos de ligar e desligar o LED
int ledOnTime = 1000;  // Tempo em milissegundos que o LED permanece ligado
int ledOffTime = 2000; // Tempo em milissegundos que o LED permanece desligado

void setup() {
  // Configura o pino do LED integrado como uma saída
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Mensagem opcional para debug, inicializa a comunicação serial (descomentar se necessário)
  // Serial.begin(115200);
  // Serial.println("Inicialização completa. O ESP8266 está pronto para piscar o LED com variáveis!");
}

void loop() {
  // Liga o LED (LOW é o nível de tensão, mas o LED está ligado, pois é ativo em nível baixo)
  digitalWrite(LED_BUILTIN, LOW);
  
  // Espera pelo tempo definido na variável ledOnTime
  delay(ledOnTime);
  
  // Desliga o LED (HIGH é o nível de tensão, o LED está desligado)
  digitalWrite(LED_BUILTIN, HIGH);
  
  // Espera pelo tempo definido na variável ledOffTime
  delay(ledOffTime);
}
