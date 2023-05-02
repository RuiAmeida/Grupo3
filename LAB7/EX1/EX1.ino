#define led 2

unsigned long time_now = 0;
int delay_time = 250;
boolean ledStatus = HIGH;
unsigned long alarm = 0;
long contagem = 0;
int x= 1000;
unsigned long alarm1;
int delay_time1 = 250;

void setup() {
 pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  contagem++;

  time_now = millis();

  if(time_now >= alarm){
    alarm += delay_time;
    digitalWrite(led, ledStatus);
    ledStatus = !ledStatus;
  }

  if(time_now >= alarm1){
    alarm1 += delay_time1;
    Serial.println(contagem);
    contagem = 0;
    
  }
}