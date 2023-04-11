int potPin = A0;
int LED=2;
void setup() {
	Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  Serial.println(potValue);
	delay(100);
  if (potValue<900){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
  
}