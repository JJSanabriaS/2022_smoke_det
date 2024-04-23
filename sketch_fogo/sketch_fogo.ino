int Pinopto = 8; //optoacoplador
int PinA1 = A1;//PINO analogico sensor fogo (1)
 
int leitura_fogo = 100;//limite leitura aceitavel
 
void setup(){
pinMode(PinA1, INPUT); //ENTRADA
pinMode(Pinopto, OUTPUT); //SAÍDA
Serial.begin(9600);//rata baudios
}
void loop(){
int valor_fogo = analogRead(PinA1); //valor variavel entrada
Serial.print("Leitura: "); //apresentacao no IDE
Serial.println(valor_fogo);// valor lido
 if (valor_fogo < leitura_fogo){//condicao 
 digitalWrite(Pinopto, HIGH); //ligacao bomba agua
 }else{ //SENÃO, FAZ
 digitalWrite(Pinopto, LOW);//bomba desligada
 }
 delay(100); //tempo espera proxima leitura microseg
}
