#define pinLed 3
#define potPin 0

int intensidade=0;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  intensidade = analogRead(potPin);
  analogWrite(pinLed, (intensidade/4));
}