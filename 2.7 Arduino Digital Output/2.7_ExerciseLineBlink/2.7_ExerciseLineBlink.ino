// Blink Code Exercise LED Line by ThinkLab

int PIN_LED_RED = 2;
int PIN_LED_GREEN = 3;
int PIN_LED_BLUE = 4;
int PIN_LED_YELLOW = 5;
int PIN_LED_WHITE = 6;

void setup() {
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_WHITE, OUTPUT);
}

void loop() {
  // From Red to White
  digitalWrite(PIN_LED_RED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_RED, LOW);
  digitalWrite(PIN_LED_GREEN, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_GREEN, LOW);
  digitalWrite(PIN_LED_BLUE, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_BLUE, LOW);
  digitalWrite(PIN_LED_YELLOW, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_YELLOW, LOW);
  digitalWrite(PIN_LED_WHITE, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_WHITE, LOW);

  // White to Red
  digitalWrite(PIN_LED_WHITE, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_WHITE, LOW);
  digitalWrite(PIN_LED_YELLOW, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_YELLOW, LOW);
  digitalWrite(PIN_LED_BLUE, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_BLUE, LOW);
  digitalWrite(PIN_LED_GREEN, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_GREEN, LOW);
  digitalWrite(PIN_LED_RED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED_RED, LOW);
}
