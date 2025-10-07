#include "hallsensor.h"
#include "display.h"
#include "fonts.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  initDisplay();
  initHall();
  showSplashScreen();
}

void loop() {
  //put your main code here, to run repeatedly:

}
