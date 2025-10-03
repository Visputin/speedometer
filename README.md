
# Speedometer

A DIY digital bicycle speedometer built with the ESP32 Devkit, an SSD1309 OLED display and the A3144 hall sensor.
This project measures wheel rotations, calculates speed, and displays it in real time.

## Pin configuration for the hall sensor
| Function | ESP32 Pin |
|----------|-----------|
| **VCC**  | 5V        |
| **OUT**  | GPIO26    |
| **GND**  | GND       |