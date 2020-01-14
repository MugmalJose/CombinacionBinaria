/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FICA-CIERCOM
 * MUGMAL JOSE LUIS
 * Realice un programa que ingrese una palabra por comunicación serial 
 * y genere una rotación de caracteres en la LCD.
 */

#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); 

String dato;
void setup(){
   Serial.begin(9600);
  
  lcd.begin(16,2);            		
  lcd.clear();               		
  lcd.setCursor(1,0); 
    lcd.print("UNIVERSIDAD TECNICA DEL NORTE ");   
     lcd.setCursor(1,1); 
     lcd.print(" MICROPROCESADO");  
     lcd.print("    ");
//  lcd.print("                 MUGMAL");  
  
}

void loop()
{
  lcd.setCursor(16,1); 
  lcd.autoscroll();    
  lcd.print(" ");      
  delay(200);         
 
} 
