// RGB LED Sweep Code by ThinkLab

#define PIN_RED_LED 8
#define PIN_GREEN_LED 9
#define PIN_BLUE_LED 10

#define DELAY_TIME 10


void setup() {
  pinMode(PIN_RED_LED, OUTPUT);
  pinMode(PIN_GREEN_LED, OUTPUT);
  pinMode(PIN_BLUE_LED, OUTPUT);

  // Brighten Red
  for (int i = 0; i <= 255; i++) {
    rgb_color(i, 0, 0);
    delay(DELAY_TIME);
  }
}

void loop() {

  //Dim Red, Brighten Green
  for (int i = 0; i <= 255; i++) {
    rgb_color(255-i, i, 0);
    delay(DELAY_TIME);
  }
  
  //Dim Green, Brighten Blue
  for (int i = 0; i <= 255; i++) {
    rgb_color(0, 255-i, i);
    delay(DELAY_TIME);
  }
  
  //Dim Blue, Brighten Red
  for (int i = 0; i <= 255; i++) {
    rgb_color(i, 0, 255-i);
    delay(DELAY_TIME);
  }
}

void rgb_color(int red_value, int green_value, int blue_value) {
  analogWrite(PIN_RED_LED, red_value);
  analogWrite(PIN_GREEN_LED, green_value);
  analogWrite(PIN_BLUE_LED, blue_value);
}
