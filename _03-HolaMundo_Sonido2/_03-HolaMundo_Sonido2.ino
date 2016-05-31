
#include "Notas.h"

void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  tone(8, NOTE_E1, 250);
  delay(250);
}
