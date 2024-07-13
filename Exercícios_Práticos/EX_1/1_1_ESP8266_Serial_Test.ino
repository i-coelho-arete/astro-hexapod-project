// Configuração inicial do programa
void setup() {
  // Inicializa a comunicação serial com a velocidade de 115200 bps (bits por segundo)
  Serial.begin(115200);
  
  // Mensagem inicial para confirmar que a comunicação serial foi iniciada
  Serial.println("Configuração completa. O ESP8266 está pronto!");
}

// Loop principal do programa
void loop() {
  // Envia a mensagem "Hello, ESP8266!" pela porta serial
  Serial.println("Hello, ESP8266!");
  
  // Aguarda 1 segundo (1000 milissegundos) antes de repetir o loop
  delay(1000);
}
