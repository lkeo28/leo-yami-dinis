void setup() {
  // executado uma vez ao iniciar
  Serial.begin(9600);
}

void loop() {
  // executado repetidamente
  Serial.println("Ola Mundo");
  delay(1000);
}
