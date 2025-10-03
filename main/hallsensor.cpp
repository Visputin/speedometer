#include "hallsensor.h"

static int hallVal = 0;

void initHall() {
  pinMode(hallPin, INPUT_PULLUP);
}

int readHall() {
  hallVal = digitalRead(hallPin);
  return hallVal;
}