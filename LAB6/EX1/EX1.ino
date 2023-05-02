int intensidade = 0;

void setup(){
pinMode(3, OUTPUT);

}
  
void loop(){
	
 	 analogWrite(3, intensidade);
      intensidade ++;
 	 delay(4);
      if (intensidade ==256) intensidade = 0;
      
}