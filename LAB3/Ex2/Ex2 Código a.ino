int LED=0;

int modo=0;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}

void loop()
{
  if(modo==0){
   	digitalWrite(LED, HIGH);
  	delay(500);
  	digitalWrite(LED, LOW);
    LED++;
  }
  else{
    digitalWrite(LED, HIGH);
  	delay(500);
  	digitalWrite(LED, LOW);
    LED--;
  }
  if(LED==7){
    modo=1;
  }
  if(LED==0){
    modo=0;
  }
}