const int DIR   = 2;
const int STEP  = 3;
 
void setup() 
{
  pinMode(DIR , OUTPUT);
  pinMode(STEP, OUTPUT);
}
 
void loop() 
{
  //Define sentido de Rotação
  digitalWrite(DIR, LOW);
 
  //Realiza uma volta completa
  for(int i = 0; i < 200; i++)
  {
    //Realiza um Passo
    digitalWrite(STEP, HIGH);
    delayMicroseconds(500);
    digitalWrite(STEP, LOW);
    delayMicroseconds(500);
  }
 
  delay(1000);
 
  //Muda o sentido de Rotação
  digitalWrite(DIR, HIGH);
 
  //Realiza uma volta completa
  for(int i = 0; i < 200; i++)
  {
    //Realiza um Passo
    digitalWrite(STEP, HIGH);
    delayMicroseconds(500);
    digitalWrite(STEP, LOW);
    delayMicroseconds(500);
  }
 
  delay(1000);
}
