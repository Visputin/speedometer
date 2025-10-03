#include "hallsensor.h"
#include "display.h"
#include "fonts.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  initDisplay();
  initHall();

  display.clearDisplay();
  centerPrint(display, "Starting...");
  display.display();
  delay(3000);
   
}
void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = readHall();
  //Serial.println(sensorVal);    // debug print

  display.clearDisplay();

  char buf[20];
  sprintf(buf, "Hall sensor: %d", sensorVal);
  centerPrint(display, buf);
  display.display();

  delay(50);
}
