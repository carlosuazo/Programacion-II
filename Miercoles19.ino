long Numero;
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  

}

void loop() {
  Numero = random(1, 100);
  Serial.print("Numero generado ");
  Serial.println(Numero);
  if ((Numero>0) and (Numero<=40))
  {
    digitalWrite(led1,HIGH);
  }
  else if ((Numero>=41) and (Numero<=70))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
  else  
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  delay(1000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);

}
