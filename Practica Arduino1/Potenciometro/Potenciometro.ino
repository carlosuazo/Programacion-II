const int pot=0;
const int led1=1;
const int led2=2;
const int led3=3;
const int led4=4;
int valorP=0;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  

}

void loop() {
  valorP=analogRead(pot);
  if ((valorP>0) && (valorP<=300))
  {
    digitalWrite(led1,HIGH);
  }
  else if ((valorP>=301) && (valorP<=450))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
  else if ((valorP>=451) && (valorP<=700))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  else 
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4;HIGH);
  }
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4;LOW);

  delay(500);


}
