
/*
 * Universidad Tecnica del Norte
 * FICA_CIERCOM
 * Mugmal José Luis
 * 
 * TAREA
 * 
 * Realizar un programa que cada 5 segundos el sistema desactiva el conversor análogo digital, 
 * cada 8 segundos la comunicación serial y cada 12 segundos un desactivación total. 
 * Esta información debe verse en una LCD.
 * 
 * 
 * 
 */

#include <LiquidCrystal.h>
String datoo;
int dato;
LiquidCrystal lcd(13,12,11,10,9,8);
int on=0;
int oon=0;

void setup() {
   lcd.begin(16,2);
   Serial.begin(9600);
   pinMode(A0,INPUT);
Serial.println("Con los Botones seleccione la entrada y salida de cambio");

  attachInterrupt(0, monedaA, LOW); 
  attachInterrupt(1, monedaB, LOW);
}


void loop() {

    dato=(analogRead(A0)*100)/1023;
    
//DOLAR A........................................
   if(on==1 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
   if(on==1 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.90);
    }
   if(on==1 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*3288.55);
    }
    if(on==1 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*4.12);
    }
    
//EURO A.......................................
   if(on==2 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*1.11);
    }
   if(on==2 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
   if(on==2 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*3659.93);
    }
    if(on==2 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*4.59);
    }
    
//PESO COLOMBIANO A.......................................
   if(on==3 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.00031);
    }
   if(on==3 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.00027);
    }
   if(on==3 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
    if(on==3 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.0013);
    }
    
//REALES A.......................................
   if(on==4 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.24);
    }
   if(on==4 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.22);
    }
   if(on==4 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*797.05);
    }
    if(on==4 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
delay(200);

}

void monedaA(){
   on++;
  switch (on){
    case 1:
    lcd.setCursor(4,0);
    lcd.print("    ");
    lcd.setCursor(0,0);
    lcd.print("DOLAR");
    break;
    
    case 2:
    lcd.setCursor(0,0);
    lcd.print("       ");
    lcd.setCursor(0,0);
    lcd.print("EURO");
    break;

    case 3:
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(0,0);
    lcd.print("PES COL");
    break;

    case 4:
    lcd.setCursor(0,0);
    lcd.print("       ");
    lcd.setCursor(0,0);
    lcd.print("REALES");
    break;

    default:
    on=0;
    }
}

void monedaB(){   
     oon++;
  switch (oon){
    case 1:
    lcd.setCursor(4,1);
    lcd.print("    ");
    lcd.setCursor(0,1);
    lcd.print("DOLAR");
    break;

    case 2:
    lcd.setCursor(0,1);
    lcd.print("       ");
    lcd.setCursor(0,1);
    lcd.print("EURO");
    break;

    case 3:
    lcd.setCursor(0,1);
    lcd.print("       ");
    lcd.setCursor(0,1);
    lcd.print("PES COL");
    break;

    case 4:
    lcd.setCursor(0,1);
    lcd.print("      ");
    lcd.setCursor(0,1);
    lcd.print("REALES");
    break;
    
    default:
    oon=0;
    }
}

void limpiar1(){
  lcd.setCursor(8,0);
   lcd.print("                ");
}
void limpiar2(){
  lcd.setCursor(8,1);
   lcd.print("                ");
  }
