/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FICA CIERCOM
 * Mugmal Jose Luis
 * 
 * Tarea
 * Realizar un programa que mediante comunicación serial ingrese el tiempo de reset del arduino de la siguiente forma: 
 * A-> 1 s B-> 2s C-> 4s D-> 8s Hay que tener en cuenta que el sistema puede ser re configurado la veces necesarias(interrupciones) 
 */




#include <EEPROM.h>

#include <MsTimer2.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
/*
 * Realizar un sistema que se ingrese 
 * por comunicación serial valor máximo
 * que pueda leer el conversor análogo 
 * digital (0-1023). Si la lectura supera 
 * el valor establecido en un 10% se 
 * enciende un led amarillo. Si sobrepasa
 * el 10% se enciende un led de color rojo
 * y envía un mensaje de alerta en la lcd
 * Todo es proceso puede volver a configurarse
 * mediante interrupciones. La lectura del
 * CAD es de exactamente 2 seg.
 */


/*
 * EEPROM
 * EEPROM.write(ubicacion,dato)
 *            (0,511,byte->255)
 * EEPROM.read(ubicacion)
 * EEPROM.update()
 * 
 */
#define led_amarillo 6
#define led_rojo 7
String dato;
int valor_max;
int valor_prec;
int lectura_cad;
int select=0;
void setup() {
  lcd.begin(16,2);
  attachInterrupt(0,seleccion,LOW);
  MsTimer2::set(2000, lectura); // 500ms period
  MsTimer2::start();
  Serial.begin(9600);
  pinMode(led_amarillo,OUTPUT);
  pinMode(led_rojo,OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("Ingrese val max:");
}
void loop() {
  if(select==0){
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
       if(lectura_cad>valor_max&&lectura_cad<valor_prec){
          digitalWrite(led_amarillo,HIGH);
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
