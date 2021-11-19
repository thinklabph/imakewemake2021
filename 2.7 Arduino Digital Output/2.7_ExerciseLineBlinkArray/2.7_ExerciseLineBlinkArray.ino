// Line Blink Using Arrays, Code by ThinkLab

#define PIN_LED_RED 2
#define PIN_LED_GREEN 3
#define PIN_LED_BLUE 4
#define PIN_LED_YELLOW 5
#define PIN_LED_WHITE 6

int pinLedArray[5] = {PIN_LED_RED, PIN_LED_GREEN, PIN_LED_BLUE, PIN_LED_YELLOW, PIN_LED_WHITE};

void setup() {
  for (int i = 0; i < 5; i++) {
    int pin = pinLedArray[i];
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    int pin = pinLedArray[i];
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  }

  for (int i = 4; i >= 0; i--) {
    int pin = pinLedArray[i];
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  } 
}
