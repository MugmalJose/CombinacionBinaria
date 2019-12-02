/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FICA-CIERCOM
 * MUGMAL JOSE LUIS
 * Estimados estudiantes realizar el siguiente ejercicio: 
 * Realizar un programa que active 4 juegos de luces con 5 leds al ingresar datos por comunicación serial de la siguiente forma: 
 * ACBF-> Activa juego 1 ACGF -> Activa juego 2 ADBF -> Activa juego 3 ADBH -> Activa juego 4
 * 
 */
int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
String dato;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
 Serial.println("INGRESE:\n");
  Serial.println("ACBF-> Activa juego 1:\n");
  Serial.println("ACGF -> Activa juego 2:\n");
  Serial.println("ADBF -> Activa juego 3:\n");
  Serial.println("ADBH -> Activa juego 4:\n");
}

void loop() {
 if(Serial.available()>0){
  dato=Serial.readString();
   
  Serial.println("");
if(dato=="ACBF"){
  Serial.println("JUEGO 1 ACTIVADO");
    juego1();
}
if(dato=="ACGF"){
  Serial.println("JUEGO 2 ACTIVADO");
    juego2();
}
if(dato=="ADBF"){
  Serial.println("JUEGO 2 ACTIVADO");
    juego3();
  }
  if(dato=="ADBH"){
  Serial.println("JUEGO 2 ACTIVADO");
    juego4();
  }

}}

void juego1(){
  
  digitalWrite(led1,HIGH);
  delay(200); 
  digitalWrite(led1,LOW);
    delay(100); 
  digitalWrite(led2,HIGH);
   delay(100); 
  digitalWrite(led2,LOW);
      delay(100); 
  digitalWrite(led3,HIGH);
       delay(100); 
  digitalWrite(led3,LOW);
       delay(100);  
  digitalWrite(led4,HIGH);
    delay(100); 
  digitalWrite(led4,LOW);
      delay(100); 
  digitalWrite(led5,HIGH);
     delay(100); 
  digitalWrite(led5,LOW);
       delay(100); 
  }

 void juego2(){
digitalWrite(led1,HIGH);
 digitalWrite(led5,HIGH);
  delay(200); 
  digitalWrite(led1,LOW);
 digitalWrite(led5,LOW);
  delay(200); 
  digitalWrite(led2,HIGH);
  digitalWrite(led4,HIGH);
  delay(200); 
  digitalWrite(led2,LOW);
  digitalWrite(led4,LOW);
  delay(200); 
   digitalWrite(led3,HIGH);
       delay(100); 
  digitalWrite(led3,LOW);
       delay(100); 
 }
  void juego3(){
digitalWrite(led3,HIGH);
       delay(100); 
  digitalWrite(led3,LOW);
       delay(100); 
        digitalWrite(led2,HIGH);
  digitalWrite(led4,HIGH);
  delay(200); 
     digitalWrite(led2,LOW);
  digitalWrite(led4,LOW);
  delay(200); 
 digitalWrite(led1,HIGH);
 digitalWrite(led5,HIGH);
  delay(200); 
    digitalWrite(led1,LOW);
 digitalWrite(led5,LOW);
  delay(200); 
  
 }
 void juego4(){
 digitalWrite(led1,HIGH);
 delay(200);
  digitalWrite(led1,LOW);
  delay(200);
 digitalWrite(led5,HIGH);
 delay(200);
  digitalWrite(led5,LOW);
  delay(200);
 digitalWrite(led2,HIGH);
 delay(200);
  digitalWrite(led2,LOW);
  delay(200);
 digitalWrite(led4,HIGH);
  delay(200);
  digitalWrite(led4,LOW);
  delay(200);
 digitalWrite(led3,HIGH);
 delay(200);
  digitalWrite(led3,LOW);
  delay(200);
 }
