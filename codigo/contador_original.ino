const int pinesLED[4] = {2, 3, 4, 5};
const int NUM_BITS = 4;
int waitDelay = 1000;

void setup() {
  for (int i = 0; i < NUM_BITS; i++) {
    pinMode(pinesLED[i], OUTPUT);
  }
}

void loop() {
  for (int numero = 0; numero <= 15; numero++) {
    mostrarBinario(numero);
    delay(waitDelay);
  }
}

void mostrarBinario(int numero) {
  for (int bit = 0; bit < NUM_BITS; bit++) {
    int estadoBit = numero & (1 << bit);
    if (estadoBit != 0) {
      digitalWrite(pinesLED[bit], HIGH);
    } else {
      digitalWrite(pinesLED[bit], LOW);
    }
  }
}
