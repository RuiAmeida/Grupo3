int ledPin = 0; 
int Botao = 1;

void setup(){
   pinMode(ledPin, OUTPUT); 
   pinMode(Botao, INPUT); 
    
}

void loop(){
  digitalWrite(ledPin, digitalRead(Botao));
}