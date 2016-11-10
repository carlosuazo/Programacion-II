const int ldr = 0;
const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
int luminosidad=0;
 
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 //luminosidad = analogRead(ldr);
 Serial.begin(9600);

}

void loop() {
  luminosidad = analogRead(ldr);
  Serial.println(luminosidad);
  if (luminosidad<300)
  {
    digitalWrite(led1,HIGH);
  }
  else if ((luminosidad>300) && (luminosidad<550))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }
  else if ((luminosidad>550) && (luminosidad<900))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  else if ((luminosidad>550) && (luminosidad<900))
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  delay(500);
  
  

}
