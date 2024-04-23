int Pinopto = 8; //optoacoplador
int PinA1 = A1;//PINO analogico sensor fogo (1)
int PinA0 = A0;//PINO analogico MQ-2 (1)

int leitura_fogo = 100;//limite leitura aceitavel
int leitura_sensor = 300;//limite leitura aceitavel
 
void setup(){
pinMode(PinA0, INPUT); //ENTRADA
pinMode(PinA1, INPUT); //ENTRADA
pinMode(Pinopto, OUTPUT); //SAÍDA
Serial.begin(9600);//rata baudios
}
void loop(){
int valor_analogico = analogRead(PinA0); //valor variavel entrada
int valor_fogo = analogRead(PinA1); //valor variavel entrada
Serial.print("Leitura: "); //apresentacao no IDE
Serial.println(valor_fogo);// valor lido
Serial.println(valor_analogico);// valor lido
 if ((valor_fogo < leitura_fogo) || (valor_analogico > leitura_sensor)){//condicao 
 digitalWrite(Pinopto, HIGH); //ligacao bomba agua
 }else{ //SENÃO, FAZ
 digitalWrite(Pinopto, LOW);//bomba desligada
 }
 delay(100); //tempo espera proxima leitura microseg
}
