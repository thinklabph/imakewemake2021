// Basic PWM Code by ThinkLab

#define PIN_LED 2
#define DELAY_TIME 10

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // Brighten
  for (int i = 0; i <= 255; i++) {
    analogWrite(PIN_LED, i);
    delay(DELAY_TIME);
  }

  // Fade
  for (int i = 255; i >= 0; i--) {
    analogWrite(PIN_LED, i);
    delay(DELAY_TIME);
  }
}
