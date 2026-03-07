// leds pins
const int led1Pin = 7;
const int led2Pin = 6;
const int led3Pin = 5;
const int led4Pin = 4;
// buzzer pin
const int buzzerPin = 3;

// function to light up leds before sorting
void leds_shuffle(int led1, int led2, int led3, int led4){
  digitalWrite(led1, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(buzzerPin, LOW);
  delay(100);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);
}


void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);

  pinMode(buzzerPin, OUTPUT);
}

void loop(){
  // call light up function
  for(int i = 0; i < 5; i++){
    leds_shuffle(led1Pin, led2Pin, led3Pin, led4Pin);
  }
  // turn off leds after loop
  digitalWrite(led1Pin, LOW); digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW); digitalWrite(led4Pin, LOW);

  // sort led and light it up
  int led_sorted = random(led4Pin, led1Pin+1);
  digitalWrite(led_sorted, HIGH);

  // beep when led is sorted
  digitalWrite(buzzerPin, HIGH);
  delay(25);
  digitalWrite(buzzerPin, LOW);
  
  delay(2000);
}





