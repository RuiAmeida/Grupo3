const int LEDPINS[] {0, 1, 2, 3, 4, 5, 6, 7};
#define BUTTONPIN  8
#define POTPIN  A0

bool estadobutao = false;
bool ultimoestado = false;
bool direcaoled = true;
unsigned long previousMillis = 0;
int potValue = 0;
int proxled = 0;
int delayTime = 0;

void setup() {
  pinMode(BUTTONPIN, INPUT_PULLUP);
  for (int i = 0; i < 8; i++) {
    pinMode(LEDPINS[i], OUTPUT);
  }
}

void loop() {
  estadobutao = digitalRead(BUTTONPIN);

  if (estadobutao != ultimoestado) {
    if (estadobutao == LOW) {
      direcaoled = !direcaoled;
    }
    ultimoestado = estadobutao;
  }

  potValue = analogRead(POTPIN);

  
  delayTime = map(potValue, 0, 1023, 50, 1450);

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= delayTime) {
    previousMillis = currentMillis;
    
    digitalWrite(LEDPINS[proxled], LOW);

   
    if (direcaoled) {
      proxled = (proxled + 1) % 8;
    } else {
      proxled = (proxled + 7) % 8;
    }

    digitalWrite(LEDPINS[proxled], HIGH);
  }
}