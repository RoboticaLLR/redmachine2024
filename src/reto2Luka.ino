// Declaración de Librerias
#include <Servo.h>

#include <NewPing.h>

#include <Wire.h>		// incluye libreria bus I2C
#include <MechaQMC5883.h>	// incluye libreria para magnetometro QMC5883L

MechaQMC5883 qmc;		//

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
int rojo1;
int verde1;
const int s0 = 4;  
const int s1 = 3;  
const int s2 = 6;  
const int s3 = 5;  
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
int giro = 0 ;
int rec= 52; // Valor del servo para avanzar dececho
int da=16; // Distancia ultrasonido derecho
int t; // ultrasonido tiempo de rebote izquierdo
int te; // ultrasonido tiempo de rebote derecho
int vel= 60; // velocidad
int gi=vel+20; // velocidad de giro
int red = 0;
int green = 0;
int colort = 0;
int ultrat = 0;
int vcono = vel;
int td;
int dd;
int ti;
int di;
int izquierda = rec+35;
int derecha = rec-25;
int linea = 1;
int rectofijo = rec;
int rectofijo2 = rec;
  int x,y,z;
  float geografico, acimut;
  float declinacion = -10.26;		// variables para los 3 ejes y acimut
int direccion = 0;
int angulo1min= 330;
int angulo1max= 360;
int angulo2min= 75;
int angulo2max= 100;
int angulo3min= 165;
int angulo3max=190;
int angulo4min= 245;
int angulo4max= 270;
int maxactual= 0;
int minactual=0;
int cono =0;
int a = 0;
int carril=0;
float angulo = acimut-10.26;
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
  pinMode(25, INPUT);
  pinMode(A15, INPUT);
  pinMode(A14, INPUT);
  pinMode(A13, INPUT);
  pinMode(A12, INPUT);
  pinMode(26, INPUT);
  pinMode(27,INPUT);
  pinMode(28,INPUT);
  pinMode(29,INPUT);
  pinMode(36, INPUT_PULLUP);
    pinMode(51, INPUT_PULLUP);
  pinMode(53,INPUT);
  pinMode(30,OUTPUT);
  pinMode(31,INPUT); 
  pinMode(42,OUTPUT);
  pinMode(43,INPUT);
  pinMode(47,OUTPUT);
  pinMode(49,OUTPUT);
  pinMode(52,OUTPUT); 
  pro.attach(10);  // Pin de control del servo
  pro.write(rec);
  digitalWrite(52,1);
  Serial.begin(9600);
  Wire.begin();			// inicializa bus I2C		// inicializa monitor serie a 9600 bps
  qmc.init();			// inicializa objeto
while(digitalRead(51)==HIGH){
  delay(1);
}
qmc.read(&x,&y,&z,&acimut);	// funcion para leer valores y asignar a variables
  digitalWrite(s0,LOW);
  digitalWrite(s1,LOW);
  pro.write(rec);
  digitalWrite(52,1);
  digitalWrite(47,0);
  analogWrite(2,vel);
  Serial.println("Isd");
 delay(20);
 
}


void loop() {




  if(d<7&&d!=0&&a==0){
    digitalWrite(52,0);
    Serial.println("cerca");
 if(di<50){
    a=2;
    Serial.print("DISTANCIA DI A2: ");
    Serial.println(di);
  }
  if(di>50){
    a=1;    
    Serial.print("DISTANCIA DI A1: ");
    Serial.println(di);
  }
  }



  if(digitalRead(A12)>0&&carril==0){
    pro.write(rec);
    delay(500);
    analogWrite(2,gi);
    pro.write(derecha);
    delay(1000);
    pro.write(rec);
    delay(300);
    pro.write(izquierda);
    delay(1000);
    pro.write(rec);
    analogWrite(2,vel);
    delay(10);
    carril=2;
    Serial.println("ROJO");
  }


  if(digitalRead(A14)>0&&carril==0){
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(800);
    pro.write(rec);
    delay(800);
    pro.write(derecha);
    delay(550);
    analogWrite(2,vel);
    pro.write(rec-1);
    delay(10);

     carril=1;
     Serial.println("VERDE");
  }



  if((digitalRead(A14))>0&&(carril==2)){
    pro.write(rec);
    delay(1000);
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(1000);
    pro.write(rec);
    delay(1000);
    pro.write(derecha);
    delay(1500);
    analogWrite(2,vel);
    pro.write(rec);
    carril=3;
  }
  
  
   if((digitalRead(A14))>0&&(carril==1)){
    delay(1);
  }


    if((digitalRead(A12))>0&&(carril==1)){
    pro.write(rec);
    delay(2000);
    analogWrite(2,gi);
    pro.write(derecha);
    delay(1600);
    pro.write(rec);
    delay(1000);
    pro.write(izquierda);
    delay(1200);
    analogWrite(2,vel);
    pro.write(rec+1);
    delay(400);
    carril=4;
  }

     if((digitalRead(A12))>0&&(carril==2)){
    delay(1);
 
  }
  

  dd= sensor_3.ping_cm();
  di= sensor_1.ping_cm();
    if(carril==1&&di<7&&di!=0){
    pro.write(rec-8);
  }  
   if(carril==1&&di>25&&di!=0){
    pro.write(rec+8);
  }
  if(carril==1&&di<25&&di>7){
    pro.write(rec);
  }
   if(carril==1&&di>40){
    pro.write(rec);
  }
  if(carril==2&&dd<7&&di!=0){
    pro.write(rec+8);
  }
  if(carril==2&&dd>20&&di!=0){
    pro.write(rec-8);
  }
  if(carril==2&&dd<15&&dd>7&&dd!=0){
    pro.write(rec+1);
  }
  if(carril==2&&dd>40){
    pro.write(rec+1);
  }
  if(carril==3&&di<10&&di!=0){
    pro.write(rec-8);
  }  
   if(carril==3&&di>25&&di!=0){
    pro.write(rec+8);
  }
  if(carril==3&&di<25&&di>7){
    pro.write(rec);
  }
   if(carril==3&&di>40){
    pro.write(rec);
  }
  if(carril==4&&dd<5&&di!=0){
    pro.write(rec+8);
  }
  if(carril==4&&dd>15&&di!=0){
    pro.write(rec-8);
  }
  if(carril==4&&dd<15&&dd>7&&dd!=0){
    pro.write(rec+1);
  }
  if(carril==4&&dd>40){
    pro.write(rec+1);
  }


//CRUZAR
  d=sensor_2.ping_cm();
  if((carril==3&&d<7&&d!=0&&a==1)||(carril==1&&d<7&&d!=0&&a==1)){    //IZQUIERDA
    digitalWrite(52,0);
    digitalWrite(47,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(47,1);
    delay(2900);
    digitalWrite(52,1);
    pro.write(rec);
    delay(500);
    digitalWrite(52,0);
    delay(1800);
    digitalWrite(47,0);
    delay(500);
    digitalWrite(52,1);
    delay(1000);
    carril=0;
    direccion++;
  }

   if((carril==3&&d<7&&d!=0&&a==2)||(carril==1&&d<5&&d!=0&&a==2)){   //DERECHA
    pro.write(rec);
    digitalWrite(52,0);
    digitalWrite(47,0);
    delay(600);
    digitalWrite(47,1);
    delay(2500);
    digitalWrite(52,1);
    delay(400);
    digitalWrite(47,0);
    pro.write(rec-30);
    delay(5000);
    pro.write(rec);
    digitalWrite(52,0);
    delay(400);
    digitalWrite(47,1);
    delay(1400);
    digitalWrite(47,0);
    delay(200);
    digitalWrite(52,1);    
    carril=0;
    direccion++;
  }


  if((carril==4&&d<7&&d!=0&&a==1)||(carril==2&&d<5&&d!=0&&a==1)){    //IZQUIERDA
    digitalWrite(52,0);
    digitalWrite(47,0);
    pro.write(rec);
    delay(800);
    digitalWrite(47,1);
    delay(3000);
    digitalWrite(52,1);
    delay(800);
    digitalWrite(47,0);
    pro.write(rec+30);
    delay(2200);
    pro.write(rec);
    digitalWrite(52,0);
    delay(400);
    digitalWrite(47,1);
    delay(1500);
    digitalWrite(47,0);
    delay(200);
    digitalWrite(52,1);    
    carril=0;
    direccion--;
  }


  if((carril==4&&d<7&&d!=0&&a==2)||(carril==2&&d<4&&d!=0&&a==2)){     //DERECHA
    digitalWrite(52,0);
    digitalWrite(47,0);
    pro.write(rec);
    delay(600);
    pro.write(rec+20);
    digitalWrite(47,1);
    delay(2600);
    digitalWrite(52,1);
    pro.write(rec);
    delay(500);
    digitalWrite(52,0);
    delay(1700);
    digitalWrite(47,0);
    digitalWrite(52,1);
    carril=0;
    direccion--;
  }

 




// reiniciar el contad
  //detectar 3 vueltas y detenerse
if(giro>11){
  delay(3400);
  digitalWrite(52,LOW);
   analogWrite(2,0);
}
}