
# Speedometer

A DIY digital bicycle speedometer built with the ESP32 Devkit, an SSD1309 OLED display and the A3144 hall sensor.
This project measures wheel rotations, calculates speed, and displays it in real time.

## Pin configuration
In order from left to right of the component:

| A3144 Hall Sensor   | ESP32 Pin | | SSD1309 OLED| ESP32 Pin |
|----------|-----------|-|---------|-----------|
| **VCC**  | 5V        | | **GND** | GND       |
| **GND**  | GND       | | **VCC** | 5V        |
| **OUT**  | GPIO26    | | **SCL** | GPIO22    | 
|          |           | | **SDA** | GPIO21    |