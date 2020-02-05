/*
 Ejercicio modos sleep
Descripcion Realizar un ejercicio que cada 2 segundos el sistema se encuentre activado y cada 10 segundos el sistema baje su consumo de corriente.
Envíe mensajes de comunicación serial para mostrar el resultado. Suba su enlace de su cuenta GitHuB.


/*Ejercicio modos sleep
Descripcion  Realizar un ejercicio que cada 2 segundos el sistema se encuentre activado y cada 10 segundos el sistema baje su consumo de corriente. 
Envíe mensajes de comunicación serial para mostrar el resultado. Suba su enlace de su cuenta GitHuB.
*/

#include <EEPROM.h>

#include <MsTimer2.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
 
#define led_amarillo 6
#define led_rojo 7
String dato;
String mensaje;
int valor_max;
int valor_prec;
int lectura_cad;
int select=0;
int dato_guardado;

void setup() {
  lcd.begin(16,2);
  attachInterrupt(0,seleccion,LOW);
  MsTimer2::set(2000, lectura); // 500ms period
  MsTimer2::start();
  Serial.begin(9600);
  pinMode(led_amarillo,OUTPUT);
  pinMode(led_rojo,OUTPUT);
  //lectura EEPROM
dato_guardado=EEPROM.read(0)*4;
lcd.setCursor(0,0);
 lcd.print("DATO GUARDADO:");
  lcd.setCursor(0,1);
  lcd.print(dato_guardado);
  delay(200);
  lcd.setCursor(0,1);
  lcd.print("    ");
  ///////
   lcd.setCursor(0,0);
  lcd.print("INGRESE EL VAL MAX");
}
void loop() {
  if(select==0){
    lcd.setCursor(0,0);
  lcd.print("INGRESE EL VAL MAX");
  lcd.setCursor(0,1);
  lcd.print("                 ");
      if(Serial.available()>0){
         dato=Serial.readString();
         valor_max=dato.toInt();
         valor_prec=((valor_max*0.1)+valor_max);
         if(valor_prec>1022){
         lcd.setCursor(0,0);
         lcd.print("Valor incorrecto");
         delay(200);
         lcd.setCursor(0,0);
         lcd.print("ingrese valor max:");
         

         }
         else{
         lcd.setCursor(0,1);
         lcd.print("vm:");
         lcd.setCursor(3,1);
         lcd.print(valor_max);
         dato_guardado=valor_max/4;
         EEPROM.write(0,dato_guardado);
        }
  }}
}
void seleccion(){
 select=1-select;
 //Serial.println(select);
 }
void lectura(){ 
    if(select==1){
       lectura_cad=analogRead(0);
       Serial.println(lectura_cad);
       if(lectura_cad>valor_max&&lectura_cad<=valor_prec){
          digitalWrite(led_amarillo,HIGH);
          mensaje="PRECAUCION";
          lcd.setCursor(0,0);
          lcd.print("                ");
          lcd.setCursor(0,0);
          lcd.print("PRECAUCION");
          lcd.setCursor(9,1);
          lcd.print("vl:");
          lcd.setCursor(12,1);
          lcd.print("    ");
          lcd.setCursor(12,1);
          
          lcd.print(lectura_cad);

          
        }
        else if (lectura_cad>valor_prec){
            digitalWrite(led_amarillo,LOW);
            digitalWrite(led_rojo,HIGH);
              mensaje="PELIGRO";
            lcd.setCursor(0,0);
            lcd.print("                ");
            lcd.setCursor(0,0);
            lcd.print("PELIGRO");
             lcd.setCursor(9,1);
          lcd.print("vl:");
          lcd.setCursor(12,1);
          lcd.print("    ");
          lcd.setCursor(12,1);
          lcd.print(lectura_cad);

         }
         else{
            digitalWrite(led_amarillo,LOW);
            digitalWrite(led_rojo,LOW);
              mensaje="NORMAL";
            lcd.setCursor(0,0);
            lcd.print("                ");
            lcd.setCursor(0,0);
            lcd.print("NORMAL");
             lcd.setCursor(9,1);
          lcd.print("vl:");
          lcd.setCursor(12,1);
          lcd.print("    ");
          lcd.setCursor(12,1);
          lcd.print(lectura_cad);

          }
      }
  }
  void lcd_print(String a){
    lcd.setCursor(0,0);
            lcd.print("                ");
            lcd.setCursor(0,0);
            lcd.print(a);
             lcd.setCursor(9,1);
          lcd.print("vl:");
          lcd.setCursor(12,1);
          lcd.print("    ");
          lcd.setCursor(12,1);
          lcd.print(lectura_cad);
  }
