/*      Universidad Tecnica del Norte
 *       FICA - CIERCOM
 *       Jose Luis Mugmal
 *       
 *       Realizar un programa que por comunicación serial se ingrese el límite de lectura 
 *       del conversor análogo digital (0-1024) si el valor del conversor supera dicho valor, 
 *       se enciende un led.
*/        

int limite;
int a=0;
String CX; 
int valor;

void setup() {
 Serial.begin(9600);
 pinMode(8,OUTPUT);
 Serial.println("Ingrese un numero de 0 a 1023");
}

void loop() {
  
  if(Serial.available()>0 ){
CX=Serial.readString();
limite=CX.toInt();
  
  if(limite<1024 && limite>-1){
    a=1;
    }
    else{
      Serial.println("Numero Incorrecto");
      Serial.println("Ingrese un numero de 0 a 1023");
    }
  }
      
if(a==1){
  
  valor=analogRead(0);
  Serial.println(valor);  
  delay(500);
  if(valor>limite){
    digitalWrite(8,HIGH);
    Serial.println("El led esta encendidio");
    }
    else{
    digitalWrite(8,LOW);
    Serial.println("El led esta apagado");
      }
  
  }

}
