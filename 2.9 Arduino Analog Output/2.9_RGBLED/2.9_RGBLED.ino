// RGB LED Code by ThinkLab

#define PIN_RED_LED 8
#define PIN_GREEN_LED 9
#define PIN_BLUE_LED 10


void setup() {
  pinMode(PIN_RED_LED, OUTPUT);
  pinMode(PIN_GREEN_LED, OUTPUT);
  pinMode(PIN_BLUE_LED, OUTPUT);
}

void loop() {
  rgb_color(255, 0, 0);       // RED
  delay(1000);
  rgb_color(125, 0, 0);       // Dimmed RED
  delay(1000);
  rgb_color(0, 255, 0);       // GREEN
  delay(1000);
  rgb_color(0, 125, 0);       // Dimmed GREEN
  delay(1000);
  rgb_color(0, 0, 255);       // BLUE
  delay(1000);
  rgb_color(0, 0, 125);       // Dimmed BLUE
  delay(1000);
  rgb_color(255, 255, 0);     // Yellow
  delay(1000);
  rgb_color(255, 0, 255);     // Magenta
  delay(1000);
  rgb_color(0, 255, 255);     // Cyan
  delay(1000);
  rgb_color(255, 255, 255);   // White
  delay(1000);
}

void rgb_color(int red_value, int green_value, int blue_value) {
  analogWrite(PIN_RED_LED, red_value);
  analogWrite(PIN_GREEN_LED, green_value);
  analogWrite(PIN_BLUE_LED, blue_value);
}
