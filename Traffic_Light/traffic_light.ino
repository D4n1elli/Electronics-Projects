// leds pins variables
const int led_red = 5;
const int led_yellow = 6;
const int led_green = 7;

void setup() {
  // setting up the leds
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  // loop to light up and turn off leds
  digitalWrite(led_red, HIGH);
  delay(1000);

  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, HIGH);
  delay(500);

  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);

  delay(1000);
  digitalWrite(led_green, LOW);

}
