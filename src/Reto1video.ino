// Declaración de Librerias
#include <Servo.h>

#include <NewPing.h>

//ultrasonido izquierdo
#define TRIGGER_sensor_1  8
#define ECO_sensor_1  9

//ultrasonido central
#define TRIGGER_sensor_2  25
#define ECO_sensor_2  24

//ultrasonido derecho
#define TRIGGER_sensor_3 12
#define ECO_sensor_3  11

// maxima distancia que puede detectar el ultrasonido
#define MAX_DISTANCE 10000000000000

//Declaracion de los sensores ultrasonidos (libreria NewPing.h)
NewPing sensor_1 (TRIGGER_sensor_1, ECO_sensor_1, MAX_DISTANCE);//di
NewPing sensor_2 (TRIGGER_sensor_2, ECO_sensor_2, MAX_DISTANCE);//d
NewPing sensor_3 (TRIGGER_sensor_3, ECO_sensor_3, MAX_DISTANCE); //dd

Servo pro;
const int s0 = 4;  
const int s1 = 3;  
const int s2 = 5;  
const int s3 = 6;  
const int out = 7; 
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
int rec= 52; // Valor del servo para avanzar dececho
int da=16; // Distancia ultrasonido derecho
int t; // ultrasonido tiempo de rebote izquierdo
int te; // ultrasonido tiempo de rebote derecho
int vel= 500; // velocidad
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
int izquierda = rec+40;
int derecha = rec-40;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);// Trigger
  pinMode(11, INPUT);  //cho
  pinMode(12, OUTPUT); //Trigger
  pinMode(13, OUTPUT);  //Echo
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, INPUT);
  pinMode(25, OUTPUT);
  pinMode(26, INPUT);
  pinMode(36, INPUT_PULLUP);
  pinMode(53,INPUT);
  pinMode(30,OUTPUT);
  pinMode(31,INPUT); 
  pinMode(42,OUTPUT);
  pinMode(43,INPUT);
  pinMode(51,INPUT_PULLUP);
  pinMode(52, OUTPUT); 
  pro.attach(10);  // Pin de control del servo
  digitalWrite(52,HIGH);
  Serial.begin(9600);


 pro.write(rec);
while(digitalRead(51)==HIGH){
  delay(1);
}
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);
  pro.write(rec);
  digitalWrite(52,1);
  analogWrite(2,vel);
  Serial.println("Isd");
 delay(20);
}


void loop() {

di=sensor_1.ping_cm();
dd=sensor_3.ping_cm();
Serial.print("Sensor di: ");
Serial.println(di);
Serial.print("Sensor dd: ");
Serial.println(dd);
Serial.print("Sensor d: ");
Serial.println(d);
if((d<40)&&(d!=0)&&(a==0)){
  if(di<70){
    a=2;
  pro.write(derecha);
  Serial.println("a2");
  Serial.println(d);
    analogWrite(2,vel-20);
  delay(1000);
  rec--;
  pro.write(rec);
  delay(400);
  giro++;
  analogWrite(2,vel);
  Serial.println("a2");

  }
  if(di>70){
    a=1;
  pro.write(izquierda);
  Serial.println("a1");
  Serial.println(d);
  delay(1000);
  giro++;
  pro.write(rec);
  delay(400);
  analogWrite(6,vel);
   Serial.println("a1");
    
       
  }
}
    
// Si detecta un ultrasonido=
di= sensor_1.ping_cm();

 if ((di<15)&&(di>0)){
  pro.write(derecha);
  delay(100);
  pro.write(rec);
  delay(100);
   Serial.println("di");
  }
  

d= sensor_2.ping_cm();

  if ((d<50)&&(d>0)&&(a==2)){
  pro.write(derecha);
  Serial.println("a2");
  Serial.println(d);
  analogWrite(2,vel-20);
  delay(1000);
  pro.write(rec);
  delay(400);
  giro++;
  analogWrite(2,vel);
  Serial.println("a2");
  }

  if ((d<50)&&(d>0)&&(a==1)){
  pro.write(izquierda);
  Serial.println("a1");
  Serial.println(d);
  delay(700);
  giro++;
  pro.write(rec);
  delay(400);
  analogWrite(6,vel);
   Serial.println("a1");
  }

  

 

  dd= sensor_3.ping_cm();

   if ((dd<15)&&(dd>0)){
  pro.write(izquierda);
  delay(100);
  pro.write(rec);
  delay(100);
  
   Serial.println("dd");

  }



  




// reiniciar el contad
  //detectar 3 vueltas y detenerse
if(giro>11){
  delay(900);
  digitalWrite(52,LOW);
   analogWrite(2,0);
}
}