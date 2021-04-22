
void setup(){
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(7 OUTPUT);
  Serial.begin(9600);


}
void loop()
{
  int var = analogRead(A0);
  int y = map(var,0,1023,10000,1000);

  Serial.println(y);
  Serial.println(var);

  if(var> 1000){
    digitalWrite(7 ,HIGH);
    noTone(3);
  }else{
    digitalWrite(7, LOW); 
    tone(3,y);
  }

 

}
