const int hallPin = 26;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(hallPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(hallPin);
  Serial.println(val);
  delay(50);
}
