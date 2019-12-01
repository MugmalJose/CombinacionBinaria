/*  UNIVERSIDAD TECNICA DEL NORTE
 *   FICA-CIERCOM
 *   SISTEMAS-MICROPROCESADOS
 *   Mugmal José Luis
*/

String CX;
int numero;
String binario1;
String binario2;
String binario3;
String binario4;
String binario5;
String binario6;
String binario7;
String binario8;


void setup() {

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);

Serial.begin(9600);
Serial.println("Ingrese el numero decimal a ser convertido");
Serial.println("Ejemplo: 5 - 00000101");
Serial.println("De de 0 a 255 Decimal");



}

void loop() {
  
if(Serial.available()>0){
  CX=Serial.readString();
  numero=CX.toInt();
  
if(numero<256 && numero>-1){

    if(numero>=128){
      binario1="1";
      numero=numero-128;
      }
      else{
        binario1="0";
        }
     delay(10);

    if(numero>64){
      binario2="1";
      numero=numero-64;
      }
      else{
        binario2="0";
        }
     delay(10);

    if(numero>32){
      binario3="1";
      numero=numero-32;
      }
      else{
        binario3="0";
        }
     delay(10);

    if(numero>16){
      binario4="1";
      numero=numero-16;
      }
      else{
        binario4="0";
        }
     delay(10);


    if(numero>=8){
      binario5="1";
      numero=numero-8;
      }
      else{
        binario5="0";
        }
     delay(10);


    if(numero>=4){
      binario6="1";
      numero=numero-4;
      }
      else{
        binario6="0";
        }
     delay(10);

    if(numero>=2){
      binario7="1";
      numero=numero-2;
      }
      else{
        binario7="0";
        }
     delay(10);

    if(numero>=1){
      binario8="1";
      numero=numero-1;
      }
      else{
        binario8="0";
        }
     delay(10);

     

  Serial.println(" ");     
  Serial.print("Decimal: ");
  Serial.println(CX);
  Serial.print("Binario: ");
  Serial.println(binario1+binario2+binario3+binario4+binario5+binario6+binario7+binario8);

      
  digitalWrite(13,binario1.toInt());
  digitalWrite(12,binario2.toInt());
  digitalWrite(11,binario3.toInt());
  digitalWrite(10,binario4.toInt());
  digitalWrite(9,binario5.toInt());
  digitalWrite(8,binario6.toInt());
  digitalWrite(7,binario7.toInt());
  digitalWrite(6,binario8.toInt());
  
  }
  else{
  Serial.println(" ");
  Serial.println("El numero no es correcto");
  }
  }
}
