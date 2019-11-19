/*
 * UNIVERSIDAD TECNICA DEL NORTE
 * FICA 
 * CIERCOM
 * SISTEMAS MICROPROCESADOS
 * MUGMAL JOSE LUIS
 */
String ced,entrada,a,b; // declaración de strings
int coef [] = {2, 1, 2, 1, 2, 1, 2, 1, 2};  //coeficientes de verificación
int dat = 0;
int total = 0;
int longitudCedula = 10;
int nProviancias = 24;
int tercerdigito = 6;

void setup() {
Serial.begin(9600);
Serial.println(" SISTEMA DE VALIDACIÓN DE CEDULA");
Serial.println("INGRESE SU NUMERO DE CEDULA, !TOME EN CUENTA SU GUION!");
}

void loop() {
 
  while(Serial.available()>0 ){
  entrada=Serial.readString();
  Serial.println(" ");
  a=entrada.substring(0,entrada.indexOf("-"));
  Serial.println(a);
    b=entrada.substring(entrada.indexOf("-")+1,entrada.length());
  Serial.println(b);
   ced=(a+b);
  Serial.println(ced);

  if (ced.length() == longitudCedula) {  // cuando el array cumple con el tamaño de 10
  int provincia = (ced.substring(0,2)).toInt(); // verificar los dos numero de la provincia
  int digitoTres = (ced.substring(2,3)).toInt();  // verificar el digito tercero
           
  if ((provincia > 0 && provincia <= nProviancias) && digitoTres < tercerdigito) {  //Comprueba si se cumplen las primeras condiciones
  int digitoVerificadorRecibido = (ced.substring(9,10)).toInt();
  for (int i = 0; i < 9; i++) {
  int valor = coef[i] * (ced.substring(i,i+1)).toInt();
  total = valor >= 10 ? total + (valor - 9) : total + valor;
                }
  int digitoVerificadorObtenido = (total % 10) > 0 ? 10 - (total % 10) : (total % 10);
  if (digitoVerificadorObtenido == digitoVerificadorRecibido) {
  Serial.println("!El numero de cedula ingresada es CORRECTO!");
  dat = -1;
  } else {
  Serial.println("!El numero de cedula ingresado esta INCORRECTO! vuelva  a ingresar");}
  } else {
  Serial.println("!El numero de cedula es INCORRECTO (Tercer digito)!");
            }
  } else {
  Serial.println("!El numero de cedula es INCORRECTO (No contiene los 10 digitos)!");
  }   
    
  }

}
