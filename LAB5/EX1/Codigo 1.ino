int potPin = A0;

void setup() {
	Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  Serial.print(potValue);
	delay(100);
}