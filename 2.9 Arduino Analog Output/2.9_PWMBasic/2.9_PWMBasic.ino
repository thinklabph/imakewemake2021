// Basic PWM Code by ThinkLab

#define PIN_LED 2

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  analogWrite(PIN_LED, 0);  // 0% Duty Cycle
  delay(1000);
  analogWrite(PIN_LED, 64); // 25% Duty Cycle
  delay(1000);
  analogWrite(PIN_LED, 128);  // 50% Duty Cycle
  delay(1000);
  analogWrite(PIN_LED, 192);  // 75% Duty Cycle
  delay(1000);
  analogWrite(PIN_LED, 255);  // 100% Duty Cycle
  delay(1000);
}
