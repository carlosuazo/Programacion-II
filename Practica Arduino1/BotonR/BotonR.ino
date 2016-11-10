long numero;
const int boton = 1; 
int estado;
void setup() {
 Serial.begin(9600);
 randomSeed(analogRead(0));
 pinMode(boton, INPUT);

}

void loop() {
  estado=digitalRead(boton);
  if (estado==HIGH)
  {
  numero=random(1,100);
  Serial.print("Numero Generado:  ");
  Serial.println(numero);
  }
  else 
  {
    Serial.print("No se genero numero ");
  }
  delay (500);
}
