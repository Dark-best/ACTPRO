int rouge = 10;
int jaune = 9;
int vert = 8;

void setup() {
  pinMode(rouge, OUTPUT);
  pinMode(jaune, OUTPUT);
  pinMode(vert, OUTPUT);
}

void loop() {
  digitalWrite(rouge, HIGH);
  delay(500);
  
  digitalWrite(vert, HIGH);
  digitalWrite(rouge, LOW);
  delay(500);
  
  digitalWrite(jaune, HIGH);
  digitalWrite(vert, LOW);
  delay(200);
  
  digitalWrite(9, LOW);
}
