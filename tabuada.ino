void setup() {
  Serial.begin(9600);

  for (int n = 0; n <= 10; n++) {

    Serial.print("--- Tabuada do ");
    Serial.print(n);
    Serial.println(" ---");

    for (int m = 0; m <= 10; m++) {
      Serial.print(n);
      Serial.print(" x ");
      Serial.print(m);
      Serial.print(" = ");
      Serial.println(n * m);
    }

    Serial.println("");  // linha em branco entre tabuadas
  }
}

void loop() {
  // nada aqui
}
