#include <TimerOne.h>
#define pinLed 2 
volatile unsigned long estLed;
volatile unsigned long count;
volatile unsigned long time_now = 0;
volatile unsigned long alarm = 0;
volatile int delay_time = 1000;
void setup() {
  pinMode(pinLed, OUTPUT);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(pisca);
  Serial.begin(9600);
}
void pisca(){
    
    Serial.println(count);
  count=0;
    }

void loop() {
  count++;

  }


