// Blink Code at Pin 2 by ThinkLab

int PIN_LED = 2;
int DELAY_TIME = 1000;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(PIN_LED, LOW);
  delay(DELAY_TIME);
}
