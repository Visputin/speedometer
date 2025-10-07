#include <sys/_stdint.h>
#include <Wire.h>
#include "display.h"
#include "fonts.h"

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void initDisplay() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1309 allocation failed"));
    for(;;);
  }
  display.clearDisplay();
}

// --- Helper function for centering one print --- //
void centerSinglePrint(const char *text) {
  int16_t x1, y1;
  uint16_t w, h;

  display.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);
  int16_t x = (128 - w) / 2 - x1;
  int16_t y = (64 - h) / 2 - y1;

  display.setCursor(x, y);
  display.print(text);
}

// --- TODO: Helper to center text on the bottom of the screen --- //
void centerBottom(const char *text) {
  int16_t x1, y1;
  uint16_t w, h;

  display.getTextBounds(text, 0, 0);
}

// --- Splash screen --- //
void showSplashScreen() {
  display.clearDisplay();
  display.setFont(&FreeSerif16pt7b);
  display.setTextColor(WHITE);

  center("Speedometer");
  display.display();
  delay(3000);

  display.clearDisplay();
  display.display();
}


