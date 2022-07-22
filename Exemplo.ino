//Programa: Piscar Led
//Autor: Guilherme Lopes

void setup()
{
  //Define o pino 5 como saída
  pinMode(5, OUTPUT);
}
 
void loop()
{
  //Liga o Led
  digitalWrite(5, HIGH);
   
  //Aguarda um intervalo de 5 segundos - led ligado
  delay(5000);
   
  //Apaga o led
  digitalWrite(5, LOW);
   
   //Aguarda um intervalo de 5 segundos - led desligado
  delay(5000);
}