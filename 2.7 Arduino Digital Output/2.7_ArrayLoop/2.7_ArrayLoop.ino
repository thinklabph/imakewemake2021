// Array Using For Loop by ThinkLab

#define PIN_LED_RED 2
#define PIN_LED_GREEN 3
#define PIN_LED_BLUE 4
#define PIN_LED_YELLOW 5
#define PIN_LED_WHITE 6

int pinLedArray[5] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < 5; i++) {
    pinMode(pinLedArray[i], OUTPUT);
  }
}

void loop() {
}
