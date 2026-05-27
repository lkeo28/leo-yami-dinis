bool escolha = true; // Muda para false para correr a Tabuada

// ---- OLA MUNDO ----
void olaMundo_setup() {
  Serial.println("Ola Mundo!");
}

void olaMundo_loop() {
  // Coloca aqui o conteúdo do loop do ola_mundo.ino
}

// ---- TABUADA ----
void tabuada_setup() {
  Serial.println("Tabuada:");
  for (int i = 1; i <= 10; i++) {
    Serial.print("2 x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(2 * i);
  }
}

void tabuada_loop() {
  // Coloca aqui o conteúdo do loop do tabuada.ino
}

// ---- SETUP E LOOP PRINCIPAIS ----
void setup() {
  Serial.begin(9600);

  if (escolha == true) {
    olaMundo_setup();
  } else {
    tabuada_setup();
  }
}

void loop() {
  if (escolha == true) {
    olaMundo_loop();
  } else {
    tabuada_loop();
  }
}
