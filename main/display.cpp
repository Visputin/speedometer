#include <Wire.h>
#include "display.h"
#include "fonts.h"

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Helper function to center prints
void centerPrint(Adafruit_GFX &gfx, const char *text) {
  int16_t x1, y1;
  uint16_t w, h;
  gfx.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);
  int16_t x = (gfx.width() - w) / 2 - x1;
  int16_t y = (gfx.height() - h) / 2 - y1;

  gfx.setCursor((gfx.width() - w) / 2 - x1, (gfx.height() - h) / 2 - y1);
  gfx.print(text);
}

void centerPrint(Adafruit_GFX &gfx, int value) {
  char buf[12];
  itoa(value, buf, 10);
  centerPrint(gfx, buf);
}

void initDisplay() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1309 allocation failed"));
    for(;;);
  }

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setFont(&ShareTech_Regular10pt7b);  
  display.display();
}