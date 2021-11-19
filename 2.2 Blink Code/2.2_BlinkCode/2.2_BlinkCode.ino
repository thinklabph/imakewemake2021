/* Built-in LED Blink by ThinkLab
  ~ Make the built-in LED of the Arduino BLINK (turn on and turn off) continuously
  ~ Display the status of the LED (if ON or OFF) in the Serial Monitor
*/

int timer = 500;                            // set timer variable as delay

void setup() {

  pinMode (LED_BUILTIN, OUTPUT);            // set all LEDPin as output
  digitalWrite (LED_BUILTIN, LOW);          // turn OFF LED on startup
  Serial.begin (9600);                      // start serial communication at 9600 baud rate 
}

void loop() {
  digitalWrite (LED_BUILTIN, HIGH);         // turn ON built-in LED
  Serial.println ("ON");                    // print "ON" in the serial monitor
  delay (timer);                            // wait for timer milliseconds
  digitalWrite (LED_BUILTIN, LOW);          // turn OFF built-in LED
  Serial.println ("OFF");                    // print "OFF" in the serial monitor
  delay (timer);                            // wait for timer milliseconds
}
