#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "fonts/FreeSans12pt7b.h"
#include "fonts/ShareTech_Regular10pt7b.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Helper function to center prints
void centerPrint(Adafruit_GFX &gfx, const char *text) {
  int16_t x1, y1;
  uint16_t w, h;
  gfx.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);

  int16_t x = (gfx.width() - w) / 2 - x1;
  int16_t y = (gfx.height() - h) / 2 - y1;

  gfx.setCursor(x, y);
  gfx.print(text);
}

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1309 allocation failed"));
    for(;;);
  }

  display.clearDisplay();

  //display.setTextSize(1);
  display.setFont(&ShareTech_Regular10pt7b);  
  display.setTextColor(WHITE);

  centerPrint(display, "Welcome!");
  display.display();
}

void loop() {
  
}
