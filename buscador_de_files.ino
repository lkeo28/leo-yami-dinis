bool escolha = true;
bool jaCorreu = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Escreve 'true' ou 'false' e prime Enter:");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input == "true") {
      escolha = true;
      jaCorreu = false;
    } else if (input == "false") {
      escolha = false;
      jaCorreu = false;
    } else {
      Serial.println("Comando invalido! Usa 'true' ou 'false'");
      return;
    }
  }

  if (!jaCorreu) {
    if (escolha) {
      // --- OLA MUNDO ---
      Serial.println("Ola Mundo!");

    } else {
      // --- TABUADA ---
      for (int i = 1; i <= 10; i++) {
        Serial.print("2 x ");
        Serial.print(i);
        Serial.print(" = ");
        Serial.println(2 * i);
      }
    }
    jaCorreu = true;
  }
}
