int ledPin = 0; 
int Botao = 1; 
int estadoBotao;

void setup(){
    pinMode(ledPin, OUTPUT); 
    pinMode(Botao, INPUT); 
}

void loop(){
    estadoBotao = digitalRead(Botao); 
    if (estadoBotao == HIGH){ 
        digitalWrite(ledPin, LOW); 
    }
    else{ 
        digitalWrite(ledPin, HIGH);
    }
}