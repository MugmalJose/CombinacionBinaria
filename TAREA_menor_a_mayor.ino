/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FICA-CIERCOM
 * SISTEMAS MICROPROCESADOS
 *
 * EJERCICIO:Realizar un ejercicio en el cual tenga las etapas de: 
 * (i)Ingreso de datos y (ii) ordenamiento (i)Al ingresar la palabra solo pueden ser números por comunicación serial. 
 * (ii) Una vez ingresados lo números, ordenarlos de menor a mayor e imprimirlo por comunicación serial.
 */
String dato;
String dato1;
String letra;
int tam;
String a;
String total1="";
String total2="";

int n=0;

void setup() {
Serial.begin(9600);
attachInterrupt(0, menu, FALLING); 

Serial.println("ORDENAR DE MENOR A MAYOR EL DATO INGRESADO");
Serial.println("Haga clic en el boton para ingresar el dato:");

}

void loop() {
  total1="";
  a="";
  total2="";
  if(Serial.available()>0){
    dato=Serial.readString();
    tam=dato.length();
   dato1=!dato;
    if(n==1){
Serial.println("" );
    Serial.println("el dato de menor a mayor queda: " + dato);
      
     
    }
    
    
  }
}


  void menu(){
    n++;
    switch(n){
      case 1:
       Serial.println("");
      Serial.println("INGRESAR EL DATO:");
      
      break;  

      case 2:
      n=0;
      break;
        }
    }
