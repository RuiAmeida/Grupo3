int duration = 1024;
int intensidade = 0;
int modo = 0;

void setup(){
pinMode(3, OUTPUT);

}
  
void loop(){
	if (modo == 0) {
		intensidade ++;
 	 analogWrite(3, intensidade);
 	 delay(4);
      if (intensidade ==256) modo = 1;
      
	}
	else  {
  	intensidade --;
  	analogWrite(3, intensidade);
  	delay(4);
      if (intensidade ==0) modo = 0;
	}
}