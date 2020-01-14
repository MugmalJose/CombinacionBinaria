#include <Keypad.h>
#include <LiquidCrystal.h>
#include<MsTimer2.h>

/*                                                         Universidad Tecnica del Norte
 *                                                               FICA - CIERCOM
 *                                                               Jose Luis Mugmal
 *                                  Realice ...
 * 
*/
const byte ROWS=4;
const byte COLS=4;
char keys [ROWS][COLS]={
  {'7','8','9','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','8','#','D'}
  };
byte rowPins[ROWS]={2,3,4,5};
byte colPins[COLS]={6,7,8,9};

LiquidCrystal lcd (A0,A1,13,12,11,10);

Keypad teclado = Keypad( makeKeymap(keys),rowPins,colPins,ROWS,COLS);
String tecla;
String aa="";
String tiempo;
int tiempoo;


void setup() {
Serial.begin(9600);
MsTimer2::set(1000,reloj);
MsTimer2::stop();
lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("   CONTADOR");
  lcd.setCursor(0,1);
  lcd.print("Ingrese un numero");
}

void loop() {
 tiempo=teclado.getKey();

tiempoo=tiempo.toInt();
delay(1000);
 if(tiempoo>0){
  MsTimer2::start();
  }
}

void reloj(){
lcd.setCursor(0,1);
lcd.print("    ");
  tiempoo--;
lcd.setCursor(0,1);
lcd.print(tiempoo);
}
