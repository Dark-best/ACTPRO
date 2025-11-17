const byte TRIGGER_PIN = 2;
const byte ECHO_PIN    = 3;

const float SOUND_SPEED = 0.343;
const unsigned long MEASURE_TIMEOUT = 25000UL;

void setup() {
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  digitalWrite(TRIGGER_PIN, LOW);
}

void loop() {
  digitalWrite(TRIGGER_PIN, HIGH);
  delay(1);
  digitalWrite(TRIGGER_PIN, LOW);

  long measure = pulseIn(ECHO_PIN, HIGH, MEASURE_TIMEOUT);
  float distance_mm = measure / 2 * SOUND_SPEED;

  Serial.print(F("Distance : "));
  Serial.print(distance_mm);
  Serial.print(F(" mm ("));
  Serial.print(distance_mm / 10.0);
  Serial.print(F(" cm, "));
  Serial.print(distance_mm / 1000.0);
  Serial.println(F(" m)"));

  delay(500);
}
