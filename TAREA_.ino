int n1[6]={0,0,0,0,0,1};
int n2[6]={0,0,0,0,1,0};
int n3[6]={0,0,0,0,1,1};
int n4[6]={0,0,0,1,0,0};
int n5[6]={0,0,0,1,0,1};
int n6[6]={0,0,0,1,1,0};
int n7[6]={0,0,0,1,1,1};
int n8[6]={0,0,1,0,0,0};
int n9[6]={0,0,1,0,0,1};
int n10[6]={0,0,1,0,1,0};
int n11[6]={0,0,1,0,1,1};
int n12[6]={0,0,1,1,0,0};
int n13[6]={0,0,1,1,0,1};
int n14[6]={0,0,1,1,1,0};
int n15[6]={0,0,1,1,1,1};
int n16[6]={0,1,0,0,0,0};
int n17[6]={0,1,0,0,0,1};
int n18[6]={0,1,0,0,1,0};
int n19[6]={0,1,0,0,1,1};
int n20[6]={0,1,0,1,0,0};
int n21[6]={0,1,0,1,0,1};
int n22[6]={0,1,0,1,1,0};
int n23[6]={0,1,0,1,1,1};
int n24[6]={0,1,1,0,0,0};
int n25[6]={0,1,1,0,0,1};
int n26[6]={0,1,1,0,1,0};
int n27[6]={0,1,1,0,1,1};
int n28[6]={0,1,1,1,0,0};
int n29[6]={0,1,1,1,0,1};
int n30[6]={0,1,1,1,1,0};
int n31[6]={0,1,1,1,1,1};
int n32[6]={1,0,0,0,0,0};
int n33[6]={1,0,0,0,0,1};
int n34[6]={1,0,0,0,1,0};
int n35[6]={1,0,0,0,1,1};
int n36[6]={1,0,0,1,0,0};
int n37[6]={1,0,0,1,0,1};
int n38[6]={1,0,0,1,1,0};
int n39[6]={1,0,0,1,1,1};
int n40[6]={1,0,1,0,0,0};
int n41[6]={1,0,1,0,0,1};
int n42[6]={1,0,1,0,1,0};
int n43[6]={1,0,1,0,1,1};
int n44[6]={1,0,1,1,0,0};
int n45[6]={1,0,1,1,0,1};
int n46[6]={1,0,1,1,1,0};
int n47[6]={1,0,1,1,1,1};
int n48[6]={1,1,0,0,0,0};
int n49[6]={1,1,0,0,0,1};
int n50[6]={1,1,0,0,1,0};
int n51[6]={1,1,0,0,1,1};
int n52[6]={1,1,0,1,0,0};
int n53[6]={1,1,0,1,0,1};
int n54[6]={1,1,0,1,1,0};
int n55[6]={1,1,0,1,1,1};
int n56[6]={1,1,1,0,0,0};
int n57[6]={1,1,1,0,0,1};
int n58[6]={1,1,1,0,1,0};
int n59[6]={1,1,1,0,1,1};
int n60[6]={1,1,1,1,0,0};
int n61[6]={1,1,1,1,0,1};
int n62[6]={1,1,1,1,1,0};
int n63[6]={1,1,1,1,1,1};
int btn=7;

int var=0;
int j=0;
int i=0;
int h;
int leds[6]={8,9,10,11,12,13};

void setup() {
  pinMode(btn,INPUT);
 for(h=0;h<6;h++){
 pinMode(leds[h],OUTPUT);
  }
}

void loop() {
  if(digitalRead(btn)==HIGH){
    var=var+1;
    delay(200);
    }
if(var==0){
  apagar();
  }
if(var==1){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n1[i]); 
      }
      }
if(var==2){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n2[i]); 
      }
      }
if(var==3){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n3[i]); 
      }
      }
if(var==4){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n4[i]); 
      }
      }
if(var==5){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n5[i]); 
      }
      }
if(var==6){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n6[i]); 
      }
      }
if(var==7){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n7[i]); 
      }
      }
if(var==8){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n8[i]); 
      }
      } 
if(var==9){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n9[i]); 
      }
      }
if(var==10){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n10[i]); 
      }
      }
if(var==11){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n11[i]); 
      }
      }
if(var==12){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n12[i]); 
      }
      }
if(var==13){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n13[i]); 
      }
      }
if(var==14){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n14[i]); 
      }
      }
if(var==15){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n15[i]); 
      }
      }
if(var==16){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n16[i]); 
      }
      }
if(var==17){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n17[i]); 
      }
      }
if(var==18){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n18[i]); 
      }
      }
if(var==19){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n19[i]); 
      }
      }
if(var==20){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n20[i]); 
      }
      }
if(var==21){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n21[i]); 
      }
      }
if(var==22){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n22[i]); 
      }
      }
if(var==23){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n23[i]); 
      }
      }
if(var==24){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n24[i]); 
      }
      }
if(var==25){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n25[i]); 
      }
      } 
if(var==26){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n26[i]); 
      }
      }
if(var==27){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n27[i]); 
      }
      }
if(var==28){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n28[i]); 
      }
      }
if(var==29){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n29[i]); 
      }
      }
if(var==30){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n30[i]); 
      }
      }
if(var==31){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n31[i]); 
      }
      }
if(var==32){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n32[i]); 
      }
      }
if(var==33){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n33[i]); 
      }
      }
if(var==34){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n34[i]); 
      }
      }
if(var==35){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n35[i]); 
      }
      }
if(var==36){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n36[i]); 
      }
      }
if(var==37){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n37[i]); 
      }
      }
if(var==38){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n38[i]); 
      }
      }
if(var==39){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n39[i]); 
      }
      }
if(var==40){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n40[i]); 
      }
      }
if(var==41){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n41[i]); 
      }
      } 
if(var==42){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n42[i]); 
      }
      }
if(var==43){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n43[i]); 
      }
      }
if(var==44){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n44[i]); 
      }
      }
if(var==45){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n45[i]); 
      }
      }
if(var==46){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n46[i]); 
      }
      }
if(var==47){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n47[i]); 
      }
      }
if(var==48){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n48[i]); 
      }
      }
if(var==49){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n49[i]); 
      }
      }
if(var==50){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n50[i]); 
      }
      }
if(var==51){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n51[i]); 
      }
      }
if(var==52){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n52[i]); 
      }
      }
if(var==53){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n53[i]); 
      }
      }
if(var==54){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n54[i]); 
      }
      }
if(var==55){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n55[i]); 
      }
      }
if(var==56){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n56[i]); 
      }
      }
if(var==57){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n57[i]); 
      }
      } 
if(var==58){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n58[i]); 
      }
      }
if(var==59){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n59[i]); 
      }
      }
if(var==60){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n60[i]); 
      }
      }
if(var==61){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n61[i]); 
      }
      }
if(var==62){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n62[i]); 
      }
      }
if(var==63){
      for(int i=0;i<6;i++){
      digitalWrite(leds[i],n63[i]); 
      }
      }
if(var==64){
      var=0;
      }   
}
  

//
//void encender(){
//  
//     for(int i=0;i<6;i++){
//      digitalWrite(leds[i],n63[i]); 
//      }
//      
//  
//  }

void apagar(){
      for(int i=0;i<6;i++){
        digitalWrite(leds[i],LOW);  
        }  
  }
void cambiar(){
  
  }
  
  
