// Array Basic Code by ThinkLab

#define PIN_LED_RED 2
#define PIN_LED_GREEN 3
#define PIN_LED_BLUE 4
#define PIN_LED_YELLOW 5
#define PIN_LED_WHITE 6

int pinLedArray[5] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(115200);

  Serial.print("pinLedArray[0]: ");
  Serial.println(pinLedArray[0]);
  Serial.println();

  Serial.print("pinLedArray[1]: ");
  Serial.println(pinLedArray[1]);
  Serial.println();

  Serial.print("pinLedArray[2]: ");
  Serial.println(pinLedArray[2]);
  Serial.println();

  Serial.print("pinLedArray[3]: ");
  Serial.println(pinLedArray[3]);
  Serial.println();

  Serial.print("pinLedArray[4]: ");
  Serial.println(pinLedArray[4]);
  Serial.println();
}

void loop() {
}
