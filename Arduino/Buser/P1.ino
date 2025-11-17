int buzzer = 8;
int buttonPin = 7;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // bouton relié à GND
}

void loop() {
  if(digitalRead(buttonPin) == LOW) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }
}
