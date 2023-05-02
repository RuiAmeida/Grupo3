#define led_2 2
#define led_3 3
#define led_4 4
#define led_5 5

//led 2
unsigned long time_now_2 = 0;
int delay_time_2 = 71;
unsigned long alarm2 = 0;
boolean ledStatus_2 = HIGH;

//led 3
unsigned long time_now_3 = 0;
int delay_time_3 = 100;
unsigned long alarm3 = 0;
boolean ledStatus_3 = HIGH;

//led 4
unsigned long time_now_4 = 0;
int delay_time_4 = 166;
unsigned long alarm4 = 0;
boolean ledStatus_4 = HIGH;

//led 5
unsigned long time_now_5 = 0;
int delay_time_5 = 250;
boolean ledStatus_5 = HIGH;

unsigned time_now = 0;
unsigned long alarm = 0;
long contagem = 0;
int x= 1000;
unsigned long alarm1;
int delay_time1 = 250;

void setup() {
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  contagem++;

  time_now = millis();

   //led 2
  if(time_now >= alarm2){
    alarm2 += delay_time_2;
    digitalWrite(led_2, ledStatus_2);
    ledStatus_2 = !ledStatus_2;
  }
   //led 3
  if(time_now >= alarm3){
    alarm3 += delay_time_3;
    digitalWrite(led_3, ledStatus_3);
    ledStatus_3 = !ledStatus_3;
  }
  //led 4
  if(time_now >= alarm4){
    alarm4 += delay_time_4;
    digitalWrite(led_4, ledStatus_4);
    ledStatus_4 = !ledStatus_4;
  }
  
  //led 5
  if(time_now >= alarm){
    alarm += delay_time_5;
    digitalWrite(led_5, ledStatus_5);
    ledStatus_5 = !ledStatus_5;
  }

  if(time_now >= alarm1){
    alarm1 += delay_time1;
    Serial.println(contagem);
    contagem = 0;
    
  }
}