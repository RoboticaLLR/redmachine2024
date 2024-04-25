// Declaración de Librerias
#include <Servo.h>
#include "Adafruit_TCS34725.h"
Adafruit_TCS34725 tcs =
Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_1X);
#include <NewPing.h>

//ultrasonido 1
#define TRIGGER_sensor_1  30
#define ECO_sensor_1  31

//ultrasonido 2
#define TRIGGER_sensor_2  11
#define ECO_sensor_2  12

//ultrasonido 3
#define TRIGGER_sensor_3 42
#define ECO_sensor_3  43

// maxima distancia que puede detectar el ultrasonido
#define MAX_DISTANCE 1000000000

//Declaracion de los sensores ultrasonidos (libreria NewPing.h)
NewPing sensor_1 (TRIGGER_sensor_1, ECO_sensor_1, MAX_DISTANCE);
NewPing sensor_2 (TRIGGER_sensor_2, ECO_sensor_2, MAX_DISTANCE);
NewPing sensor_3 (TRIGGER_sensor_3, ECO_sensor_3, MAX_DISTANCE);

Servo pro;
const int s0 = 24;  
const int s1 = 25;  
const int s2 = 23;  
const int s3 = 22;  
const int out = 26; 
int total=0;
int rojo=0;
int verde=0;
int azul=0;
int clear=0;
int k = 0;
int j = 0;
int b;
int X;
int d = 0; // Distancia ultrasonido izquierdo
int a = 0;
int giro = 0 ;
int rec= 85; // Valor del servo para avanzar dececho
int da=16; // Distancia ultrasonido derecho
int t; // ultrasonido tiempo de rebote izquierdo
int te; // ultrasonido tiempo de rebote derecho
int vel= 41; // velocidad
int gi=vel; // velocidad de giro
int red = 0;
int green = 0;
int colort = 0;
int ultrat = 0;
int vcono = vel;
int td;
int dd;
int ti;
int di;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);// Trigger
  pinMode(11, INPUT);  //cho
  pinMode(12, INPUT); //Trigger
  pinMode(13, OUTPUT);  //Echo
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, INPUT);
  pinMode(36, INPUT_PULLUP);
  pinMode(53,INPUT);
  pinMode(52,INPUT);
  pinMode(30,OUTPUT); //trigger derecho
  pinMode(31,INPUT); //eco derecho
  pinMode(42,OUTPUT);//trigger izquierdo
  pinMode(43,INPUT);//eco izquierdo
  pro.attach(4);  // Pin de conwtrol del servo
  digitalWrite(22,HIGH);
  Serial.begin(9600);


a=0;
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
  pro.write(rec);
  digitalWrite(9,HIGH);
  analogWrite(6,vel);
  Serial.println("Isd");
 delay(20);
}


void loop() {
  color(); 
  Serial.print("   ");  
  Serial.print(rojo, DEC);  
  Serial.print("   ");  
  Serial.print(verde, DEC);  
  Serial.print("   ");  
  Serial.print(azul, DEC);  
total=rojo + verde + azul;
  if ((total> 14&& rojo>=6)&& (a==0)||(total> 14&& rojo>6)&&(a==2)) 
  {  
    a=2;
   Serial.println("aaaaaaaaaaaaaaaaaaaa");
   Serial.println(a);
    giro++;
pro.write(110);
delay(2200);
pro.write(rec);
    
   Serial.println("   azul");    
  }   
  if ((total>14&& rojo<=5)&&(a==0)||(total>14&& rojo<=5)&&(a==1)) 
  {  
    a=1;
    giro++;
pro.write(50);
delay(2200);
pro.write(rec);
   Serial.println("   Rojo");    
  }   
 
  else{
  Serial.println("  ");  
  }
  delay(10);     
  
    
// Si detecta un ultrasonido=
di= sensor_1.ping_cm();

 if ((di<25)&&(di>0)){
  pro.write(50);
  delay(250);
  pro.write(110);
  delay(100);
  pro.write(rec);
  delay(100);
  X=0;
  ultrat=0;
  analogWrite(6,vel);

  }
  

  

 

  dd= sensor_3.ping_cm();


   if ((dd<15)&&(dd>0)){
  pro.write(110);
  delay(350);

  pro.write(rec);
  delay(100);
    X=0;
  ultrat=0;
  analogWrite(6,vel);

  }



  


// iniciar contador
 if(X==1){
X=2;
 }
 if(X==2){
ultrat++;
X=2;
j=3;
 }

// reiniciar el contador
 if(ultrat>15){
X=0;
ultrat= 0;
pro.write(rec);
analogWrite(6,vel);
delay(500);
 }
  //detectar 3 vueltas y detenerse
if(giro>11){
  delay(2200);
  digitalWrite(8,LOW);
   analogWrite(6,0);
}
}
 

void color()  
{    
  digitalWrite(s2, LOW);  
  digitalWrite(s3, LOW);   
  
  rojo = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  digitalWrite(s3, HIGH);   
  azul = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  
  digitalWrite(s2, HIGH);   
   digitalWrite(s3, LOW);   
   clear = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH); 
     digitalWrite(s3, HIGH);   
  verde = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);  

}
