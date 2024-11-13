// Declaración de Librerias
#include <Servo.h>

#include <NewPing.h>
#include "Wire.h"
#include <MPU6050_light.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
 
#include <Wire.h>		// incluye libreria bus I2C

#include <Pixy2.h>


Pixy2 pixy;


//ultrasonido izquierdo
#define TRIGGER_sensor_1  8
#define ECO_sensor_1  9

//ultrasonido central
#define TRIGGER_sensor_2  29
#define ECO_sensor_2  28

//ultrasonido derecho
#define TRIGGER_sensor_3 12
#define ECO_sensor_3  11

//ultrasonido atras
#define TRIGGER_sensor_4 6
#define ECO_sensor_4 7


// maxima distancia que puede detectar el ultrasonido
#define MAX_DISTANCE 999

//Declaracion de los sensores ultrasonidos (libreria NewPing.h)
NewPing sensor_1 (TRIGGER_sensor_1, ECO_sensor_1, MAX_DISTANCE);//di
NewPing sensor_2 (TRIGGER_sensor_2, ECO_sensor_2, MAX_DISTANCE);//d
NewPing sensor_3 (TRIGGER_sensor_3, ECO_sensor_3, MAX_DISTANCE); //dd
NewPing sensor_4 (TRIGGER_sensor_4, ECO_sensor_4, MAX_DISTANCE); //da 

Servo pro;
    int x = -1000000, y = -1000000 , z = -1000000; //dumb values, easy to spot problem

double esquivaruno(double, double);

int distanciagirovueltacompleta= 20;
int diferenci;
double cono1= 0;
double cono2=0;
int sumang=20;
int vuelta = 0;

double cono11= 0;
double cono12=0;

double cono21= 0;
double cono22=0;

double cono31= 0;
double cono32=0;

double cono41= 0;
double cono42=0;

double proxcono=0;

int cercarec = 10;
int lejosrec =20;   
int potenciarectificado = 15;
int i;
int rojo1;
int verde1;
int preocupado = 0;
int total=0;
int rojo=0;
int verde=0;
int azul=0;
int clear=0;
int k = 0;
int j = 0;
int b;
int primera = 0;
int X;
int d = 0; // Distancia ultrasonido izquierdo
int giro = 0 ;
int rec= 53; // Valor del servo para avanzar dececho
int da; // Distancia ultrasonido derecho
int t; // ultrasonido tiempo de rebote izquierdo
int te; // ultrasonido tiempo de rebote derecho

int vel= 70; // velocidad
int velrapida = 150;
int veln = vel;
int gi=vel; // velocidad de giro


int vueltacompleta = 0;

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
int a = 1;
int hola = 0;
int carril=0;
float angulo = acimut-10.26;
int adelante = 25;
int atras = 24;
float angulof=0;
float angulom;

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x29);
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
  pinMode(26, OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,INPUT);
  pinMode(29,INPUT);
  pinMode(36, INPUT_PULLUP);
    pinMode(49, INPUT_PULLUP);
    pinMode(51, INPUT_PULLUP);
  pinMode(53,INPUT);
  pinMode(30,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(31,INPUT); 
  pinMode(42,OUTPUT);
  pinMode(43,INPUT);
  pinMode(47,OUTPUT);
  pinMode(45,OUTPUT);
  pinMode(49,OUTPUT);
  pinMode(52,OUTPUT); 
  pro.attach(10);  // Pin de control del servo
  pro.write(rec);
  Serial.begin(115200);
  Wire.begin();			// inicializa bus I2C		// inicializa monitor serie a 9600 bps

  
  			// inicializa objeto

  Serial.begin(115200);
  Serial.println("Orientation Sensor Test"); Serial.println("");
 
  /* Initialise the sensor */
  if (!bno.begin())
  {
    /* There was a problem detecting the BNO055 ... check your connections */
    Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
    while (1);
  }
 
  delay(1000);    // mpu.upsideDownMounting = true; // uncomment this line if the MPU6050 is mounted upside-down
  while(digitalRead(51)==HIGH){
delay(1);
}
  Serial.println("Done!\n");
  
 Serial.print("");
pixy.init();


  pro.write(rec);
  digitalWrite(atras,0);
  digitalWrite(adelante,1);
  analogWrite(2,vel);
  Serial.println("Iniciado");
 delay(20);

}


void loop() {
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
 // Serial.print("DIstancia da:");
  //Serial.println(da);
       /*Serial.print("cono 11: ");
        Serial.println(cono11);
        Serial.print("cono 12: ");
        Serial.println(cono12);
        Serial.print("cono 21: ");
        Serial.println(cono21);
        Serial.print("cono 22: ");
        Serial.println(cono22);
        Serial.print("vueltas: ");
        Serial.println(vuelta); */
      Serial.print("da:");
      Serial.println(da);
      
  delay(100);
      d=sensor_2.ping_cm();
    //     Serial.print("DISTANCIA DI A2: ");
    //Serial.println(di);

detectarbloques();
   di=sensor_3.ping_cm();
   d=sensor_1.ping_cm();
  if(d<10&&d!=0&&a==0){
delay(200);
    Serial.println("cerca");

     if(dd>50||d==0){
      //derecha
    a=2;

    Serial.print("DISTANCIA DD A2: ");
    Serial.println(dd);

  }
  if(dd<50&&d!=0){
    //izquierda
    a=1;    

    Serial.print("DISTANCIA DD A1: ");
   Serial.println(dd);

  }
  }
if(vueltacompleta!=1){

    dd= sensor_3.ping_cm();
  di= sensor_1.ping_cm();

esquivarconos();


cruzar();
}


//rectificado();


 






//Giros predeterminados
if(vueltacompleta==1){

        Serial.print("cono 11: ");
        Serial.println(cono11);
        Serial.print("cono 12: ");
        Serial.println(cono12);
        Serial.print("cono 21: ");
        Serial.println(cono21);
        Serial.print("cono 22: ");
        Serial.println(cono22);
        Serial.print("cono 31: ");
        Serial.println(cono31);
        Serial.print("cono 32: ");
        Serial.println(cono32);
        Serial.print("cono 41: ");
        Serial.println(cono41);
        Serial.print("cono 42: ");
        Serial.println(cono42);
        Serial.print("carril: ");
        Serial.println(carril);
        Serial.print("vueltas: ");
        Serial.println(vuelta); 


   if(vuelta>4&&vuelta!=0){
vuelta= vuelta-4;
}


if(vuelta==1){
      delay(200);
esquivaruno(cono11,cono12);

vuelta=1;
}
if(vuelta==2){
delay(200);
esquivaruno(cono21,cono22);


delay(500);
vuelta=2;
}
if(vuelta==3){
delay(200);
esquivaruno(cono31,cono32);

delay(500);
vuelta=3;
}
if(vuelta==4){
  vuelta=4;
      delay(200);
          if(cono41==1&&carril==0){     // rojo
              analogWrite(2,veln);
              pro.write(derecha);
              delay(500);
              pro.write(rec);
              delay(400);
              pro.write(izquierda);
              iraizq();
              pro.write(rec);
              analogWrite(2,veln);
              carril=2;
              
          }
          if (cono41==2&&carril==0){      //verde
              analogWrite(2,veln);
              pro.write(izquierda);
              delay(500);
              pro.write(rec);
              delay(1000);
              pro.write(derecha);
              irader();
              analogWrite(2,veln);
              pro.write(rec);
              carril=1;   
          }

          delay(300);

          if(cono42==2&&carril==2){      // Verde saliendo de rojo 
             pro.write(rec);
            delay(1000);
            analogWrite(2,veln);
            pro.write(izquierda);
            delay(900);
            pro.write(rec);
             delay(700);
              pro.write(derecha);
              delay(1300);
            pro.write(rec);
            carril=3;
            delay(200);
              }




          if(cono42==1&&carril==1){   //Rojo saliendo de verde 
          analogWrite(2,veln); 
          pro.write(derecha);
          delay(1300);
          pro.write(rec);
          while(d>20||d==0){
            d=sensor_2.ping_cm();
          }
          pro.write(izquierda);
          delay(1000);
          pro.write(rec);    
           carril=4;
          delay(200);
  }
}
proxicono();
giroscompleta();

if(giro==12&&d<120){
  delay(800);
pro.write(derecha);
girarder90();
pro.write(rec);
delay(3000);
digitalWrite(2,0);
delay(10000000);
}

}
}


// reiniciar el contad
  //detectar 3 vueltas y detenerse



void contarconos(){

if (vuelta==1&&vueltacompleta!=1){
cono11 = cono1;// cono  = rojo = 1
cono12 = cono2;//cono  = verde = 2      cono = no hay = 0
cono1=0;
cono2=0;
vuelta=1;
}
if (vuelta==2&&vueltacompleta!=1){
cono21 = cono1;
cono22 = cono2;
cono1=0;
cono2=0;
vuelta=2;
}
if (vuelta==3&&vueltacompleta!=1){
cono31 = cono1;
cono32 = cono2;
cono1=0;
cono2=0;
vuelta=3;
}
if (vuelta==4&&vueltacompleta!=1){
cono41 = cono1;
cono42 = cono2;
cono1=0;
cono2=0;
vuelta=4;
}



if(vuelta>3&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
}
/*

void rectificado(){


// Correcciones para todos
  dd= sensor_3.ping_cm();
  di= sensor_1.ping_cm();
if(giro!=0){
   //derecha        izquierda  
        Serial.print("angulof ");
        Serial.println(cono11);            
  if(x>angulof+5+5||x<angulof){

    if(carril==1&&di<cercarec&&di!=0){
    pro.write(derecha);
    ira90();
    pro.write(rec);
    

  }  
     if(carril==3&&di<cercarec&&di!=0){
        pro.write(derecha);
    ira90();
    pro.write(rec);
  } }
   //derecha        izquierda                derecha
if(x>angulof+25||x<angulof-25&&dd!=0){
      if(carril==2&&dd<cercarec){
     pro.write(izquierda);
    ira90();
    pro.write(rec);
  }
    if(carril==4&&dd<cercarec&&dd!=0){
         pro.write(izquierda);
    ira90();
    pro.write(rec);
  }}




   //derecha        izquierda                izquierda
if(x>angulof+25||x<angulof-25){
   if(carril==1&&di>lejosrec){
         pro.write(izquierda);
    ira90();
    pro.write(rec);
  }
   if(carril==3&&di>lejosrec){   
         pro.write(izquierda);
    ira90();
    pro.write(rec);
  }}
     //derecha        izquierda                derecha
   if(x>angulof+10+5||x<angulof){
    if(carril==2&&dd>lejosrec){
        pro.write(derecha);
    ira90();
    pro.write(rec);
  }
  if(carril==4&&dd>lejosrec){
        pro.write(derecha);
    ira90();
    pro.write(rec);
  }}
}}
*/


void cruzar(){

  //CRUZAR
 //carril adentro
 if(vueltacompleta!=1){
   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
  if((carril==3&&d<15&&d!=0&&a==1)||(carril==1&&d<15&&d!=0&&a==1)){    //IZQUIERDA verde
  
    Serial.println("IZQUIERDA CARRIL 3 O 1");
    analogWrite(2,velrapida);
    delay(1000);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    delay(100);
    digitalWrite(atras,1);
    girarizq90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    analogWrite(2,255);

        digitalWrite(atras,1);
         analogWrite(2,velrapida);
         delay(2500);
    
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
    delay(600);
    contarconos();
    vuelta++;

    carril=0;
    direccion++;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>4&&vuelta!=0){
vuelta= vuelta-4;
}
  }

  
//carril afuera
   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
  if((carril==3&&d<15&&d!=0&&a==2)||(carril==1&&d<15&&d!=0&&a==2)){   //DERECHA verde
        Serial.println("DERECHA CARRIL 1 O 3 VERDE");
      analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2700);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    digitalWrite(adelante,0);
    delay(400);
    digitalWrite(atras,1);
     analogWrite(2,255);
     delay(1800);
    analogWrite(2,vel);
    digitalWrite(atras,0);
    delay(200);
    digitalWrite(adelante,1);
    delay(600);
        contarconos();
    vuelta++;


    carril=0;
    direccion++;
    hola=0;
    giro++;

    if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
  
//carril afuera
   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
  if((carril==2&&d<20&&d!=0&&a==1)||(carril==4&&d<20&&d!=0&&a==1)){    //izquierda rojo
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
      analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2050);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(izquierda);
    girarizq90();
    pro.write(rec);
    digitalWrite(adelante,0);
    delay(400);
    digitalWrite(atras,1);
    analogWrite(2,255);
    delay(1500);
    analogWrite(2,vel);
    digitalWrite(atras,0);
    delay(200);
    digitalWrite(adelante,1);  
    delay(600);
    delay(600);  
        contarconos();
    vuelta++;


    carril=0;
    direccion--;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }


   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
//carril adentro
  if((carril==4&&d<15&&d!=0&&a==2)||(carril==2&&d<15&&d!=0&&a==2)){     //derecha rojo
        Serial.println("DERECHACARRIL 2O 4");
      analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(600);
    pro.write(rec+20);
    digitalWrite(atras,1);
    girarder90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(500);
    analogWrite(2,255);
    digitalWrite(adelante,0);
    delay(1500);
    analogWrite(2,velrapida);
    delay(500);
    analogWrite(2,vel);
    digitalWrite(atras,0);
    digitalWrite(adelante,1);
    delay(600);
        contarconos();
    vuelta++;


    carril=0;
    direccion--;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }


   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
if((d<10&&d!=0&&a==1&&carril==0)){    //IZQUIERDA CARRIL 0
    analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(atras,1);
    girarizq90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    delay(1500);
    analogWrite(2,velrapida);
    delay(500);
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
        contarconos();
    vuelta++;


    carril=0;
    direccion++;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
  
  

   d=sensor_2.ping_cm();
  if((carril==0&&d<20&&d!=0&&a==2)||(carril==5&&d<20&&d!=0&&a==2)) {  //DERECHA CARRIL 0
  Serial.println("DERECHACARRIL asjhdjashdhsad");
      analogWrite(2,velrapida);
    delay(850);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(600);
    pro.write(rec+20);
    digitalWrite(atras,1);
    girarder90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(500);
    digitalWrite(adelante,0);
    delay(1700);
    digitalWrite(atras,0);
    digitalWrite(adelante,1);
    delay(600);
        contarconos();
    vuelta++;



    carril=0;
    direccion--;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
delay(4);


  if((carril==8&&d<25&&d!=0&&a==1)||(d<20&&d!=0&&a==1&&carril==5)){    //IZQUIERDA carril 8
  
    Serial.println("IZQUIERDA CARRIL 8");
    analogWrite(2,velrapida);
    delay(650);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(atras,1);
    girarizq90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    digitalWrite(atras,1);
    analogWrite(2,velrapida);
    delay(2800);
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
    delay(600);
    contarconos();
    vuelta++;

    carril=0;
    direccion++;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
   
  if((carril==8&&d<25&&d!=0&&a==2)||(d<20&&d!=0&&a==2&&carril==5)){    //derecha carril 8
    Serial.println("IZQUIERDA CARRIL 8");
    analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(atras,1);
    girarder90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    digitalWrite(atras,1);
    analogWrite(2,velrapida);
    delay(1800);
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
    contarconos();
    vuelta++;

    carril=0;
    direccion++;
    hola=0;
    giro++;


  }
}}

void esquivarconos(){
  if((hola%2==1&&carril==0&&giro==0&&d>115)){     // primer cono rojo
    analogWrite(2,vel);
    pro.write(derecha);
    delay(750);
    pro.write(rec);
    delay(700);
    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    delay(300);
    
    delay(10);
    Serial.println("ROJO");
    hola=0;
    carril=8;
  }


  if((hola%2==0&&carril==0&&hola!=0&&giro==0&&d>115)){ // primer cono verde
    analogWrite(2,vel);
    pro.write(izquierda);
    delay(800);
    pro.write(rec);
    delay(600);
    pro.write(derecha);
    irader();
    pro.write(rec);
   
    delay(10);

     carril=8;
     Serial.println("VERDE");
     hola=0;
  }



//COMIENZO giro=0
  if((hola%2==1&&carril==0&&giro==4)||(hola%2==1&&carril==0&&giro==8)||(hola%2==1&&carril==0&&giro==0)){ // rojo giro=0 primero
    analogWrite(2,vel);
    pro.write(derecha);
    delay(1200);
    pro.write(rec);
    delay(500);
    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    analogWrite(2,vel);
    delay(900);
    carril=2;
    Serial.println("ROJO");
    hola=0;
    cono1 = 1;



  }

  if((hola%2==0&&carril==0&&hola!=0&&giro==4)||(hola%2==0&&carril==0&&hola!=0&&giro==8)||(hola%2==0&&carril==0&&hola!=0&&giro==0)){  // verde giro=0 primero
    analogWrite(2,vel);
    pro.write(izquierda);
    delay(800);
    pro.write(rec);
    delay(1050);
    pro.write(derecha);
    irader();
    analogWrite(2,vel);
    pro.write(rec);
    delay(10);

     carril=1;
     Serial.println("VERDE");
     hola=0;
     cono1 = 2;
  }

    if((hola%2==0&&carril==2&&hola!=0&&giro==4)||(hola%2==0&&carril==2&&hola!=0&&giro==8)){  // verde2 giro=0 
    analogWrite(2,vel);
    delay(1500);
    pro.write(izquierda);
    delay(1000);
    pro.write(rec);
       while(d>25||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(derecha);
    irader();
    pro.write(rec);
    analogWrite(2,255);

    delay(10);

     carril=3;
     Serial.println("VERDE");
     hola=0;

     cono2= 2;
  }

  if((hola%2==1&&carril==1&&giro==4)||(hola%2==1&&carril==1&&giro==8)){ // rojo2 giro=0 segundo
    analogWrite(2,vel);
    pro.write(derecha);
    delay(1400);
    pro.write(rec);
       while(d>25||d==0){
       d=sensor_2.ping_cm();
    }    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    delay(200);
    
    delay(10);
    carril=4;
    Serial.println("ROJO");
    hola=0;

    cono2 = 1;
  }


  d=sensor_2.ping_cm();


  if((hola%2==1&&carril==0&&giro!=4&&giro!=8)){ // rojo11
    analogWrite(2,gi);
    pro.write(derecha);
    delay(850);
    pro.write(rec);
    delay(1300);
    pro.write(izquierda);
   iraizq();
  
    pro.write(rec);
    analogWrite(2,vel);
    delay(10);
    carril=2;
    Serial.println("ROJO");
    hola=0;
    cono1 = 1;
  }


  if((hola%2==0)&&(carril==0)&&(hola!=0)&&(giro!=0)&&(giro!=4)&&(giro!=8)){  // verde11
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(650);
    pro.write(rec);
    delay(1300);
    pro.write(derecha);
    irader();
    analogWrite(2,vel);
    pro.write(rec);
    delay(300);

     carril=1;
     Serial.println("VERDE");
     hola=0;
     cono1 = 2;
  }



  if((hola%2==0)&&(carril==2)&&(hola!=0)&&(giro!=0&&d>115)||(hola%2==0)&&(carril==2)&&(hola!=0)&&(giro!=4&&d>115)||(hola%2==0)&&(carril==2)&&(hola!=0)&&(giro!=8&&d>115)){      // verde segundo
    delay(500);
    pro.write(rec);
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(1300);
    pro.write(rec);
    while(d>25||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(derecha);
    irader();

    pro.write(rec);
        delay(200);
    
    carril=3;
    hola=0;
    cono2 = 2;
  }
  
  if((hola%2==0)&&(carril==1)&&(hola!=0)||(hola%2==0)&&(carril==1)&&(hola!=0)||(hola%2==0)&&(carril==1)&&(hola!=0)){      // verde segundo de verde
  cono2= 2;
  carril= 3;
  hola=0;

  }

   

    if((hola%2==1&&carril==1&&giro!=0&&d>115)||(hola%2==1&&carril==1&&giro!=4&&d>115)||(hola%2==1&&carril==1&&giro!=8&&d>115)){     // rojo12
    pro.write(rec);
    delay(300);
    pro.write(derecha);
    delay(1700);
    pro.write(rec);
     while(d>20||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    delay(200);
    analogWrite(2,255);
    
    delay(400);
    carril=4;
    hola=0;
    cono2 = 1;
  }
      if((hola%2==1&&carril==2)){     // rojo segundo de rojo
hola=0;
    cono2 = 1;
    carril=4;

  }}


  void detectarbloques(){
      int numBlocks = pixy.ccc.getBlocks();

  if (numBlocks > 0) {
    int maxArea = 0; // Variable para almacenar el área máxima
    int maxSignature = 0; // Variable para almacenar la firma del bloque con mayor área

    // Buscar el bloque con el área más grande
    for (int i = 0; i < numBlocks; i++) {
      int area = pixy.ccc.blocks[i].m_height * pixy.ccc.blocks[i].m_width;
      if (area > maxArea) {
        maxArea = area;
        maxSignature = pixy.ccc.blocks[i].m_signature; // Guardar la firma del bloque más grande
      }
    }

    // Evaluar la firma del bloque con mayor área
    if (maxSignature % 2 == 0 && maxSignature != 0) {
      Serial.println("verde");
      hola = 2; // Asignar 1 a la variable hola
      Serial.println(hola);
    } 
    else if (maxSignature % 2 == 1) {
      Serial.print("rojo");

      hola = 1; // Asignar 2 a la variable hola
       Serial.println(hola);
    }
  }
  }

double esquivaruno(double conouno,double conodos){
  
            if(conouno==1&&carril==0){     // rojo
              analogWrite(2,veln);
              pro.write(derecha);
              delay(1000);
              pro.write(rec);
              delay(800);
              pro.write(izquierda);
              iraizq();
              pro.write(rec);
              delay(300);
              analogWrite(2,veln);
              carril=2;
              
          }
          if (conouno==2&&carril==0){      //verde
              analogWrite(2,veln);
              pro.write(izquierda);
              delay(700);
              pro.write(rec);
              delay(800);
              pro.write(derecha);
              irader();
              analogWrite(2,veln);
              pro.write(rec);
              carril=1;   
          }

      

          if(conodos==2&&carril==2){      // Verde saliendo de rojo 
          delay(750);
 
    pro.write(rec);
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(1300);
    pro.write(rec);
    while(d>25||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(derecha);
    irader();
    pro.write(rec-1);
    carril=3;
    hola=0;
    cono2 = 2;
              }




          if(conodos==1&&carril==1){   //Rojo saliendo de verde 
          delay(750);
          analogWrite(2,veln); 
          pro.write(derecha);
          delay(1900);
          pro.write(rec);
          while(d>15||d==0){
            d=sensor_2.ping_cm();
          }
          pro.write(izquierda);
          iraizq();
          pro.write(rec);    
           carril=4;
          delay(200);
  }
  analogWrite(2,veln);
}

void proxicono(){
 if(vuelta==1){
 proxcono =  cono21;
 }
  if(vuelta==2){
   proxcono = cono31;
 }
  if(vuelta==3){
    proxcono = cono41;
 }
  if(vuelta==4){
  proxcono = cono11;
 }
}



void giroscompleta(){
  proxicono();
 d=sensor_2.ping_cm();
if(d<40&&d!=0&&a==1&&proxcono==1&&vuelta!=3){//giro izquierda con rojo
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
    analogWrite(2,vel);
    pro.write(izquierda);
    girarizq290();
    pro.write(rec);
    delay(1300);
        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}

   d=sensor_2.ping_cm();
if(d<98&&d>70&&d!=0&&a==1&&proxcono==2){//giro izquierda con verde 

        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");

    analogWrite(2,vel);
    pro.write(izquierda);
    girarizq290();
    pro.write(rec);
    delay(500);
        contarconos();
    vuelta++;


    carril=1;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}
   d=sensor_2.ping_cm();
if(d<25&&d!=0&&a==1&&proxcono==1&&vuelta==3){//giro izquierda con rojo vuelta estacionMIENTO
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
      analogWrite(2,velrapida);
    delay(900);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2100);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(izquierda);
    girarizq90();
    digitalWrite(adelante,0);
    pro.write(rec);
    delay(400);
    digitalWrite(adelante,1);
    delay(1000);

        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}


// a=2

  proxicono();
   d=sensor_2.ping_cm();
if(d<100&&d!=0&&a==2&&proxcono==1&&vuelta!=3){//giro derecha con rojo
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
    analogWrite(2,vel);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    delay(500);
        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}

   d=sensor_2.ping_cm();
if(d<40&&d!=0&&a==2&&proxcono==2){//giro derecha con verde  carril de verde
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
    analogWrite(2,vel);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    delay(500);
        contarconos();
    vuelta++;


    carril=1;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}
   d=sensor_2.ping_cm();
if(d<25&&d!=0&&a==2&&proxcono==2&&vuelta==3){//giro derecha con rojo vuelta estacionMIENTO
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
      analogWrite(2,velrapida);
    delay(900);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2100);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(derecha);
    girarder90();
    digitalWrite(adelante,0);
    pro.write(rec);
    delay(400);
    digitalWrite(adelante,1);
    delay(1000);

        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}
}
/*
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
*/

void girarder90(){
    //subir es mas derecha bajar mas izquierda
  int error=5;
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  angulof=angulof+90;
   Serial.println(angulof); 

  if(angulof>360){
  angulof-=360;
   Serial.println(angulof); 

}
 x = orientationData.orientation.x+sumang;
  while(x>angulof+error+5||x<angulof+error){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
   Serial.println(angulof); 
 Serial.println("listoc reack"); 

}


void girarizq90(){
    //subir es mas derecha bajar mas izquierda
  int error=29;
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
angulof=angulof-90;
   Serial.println("ANGULO ESPERADO");
 Serial.println(angulof); 

if(angulof<0){
  angulof= angulof+360;
   Serial.println("ANGULO ESPERADO"); 
   Serial.println(angulof); 
   delay(1000);

}                    //cambiaestevalor        positivo+izquierda       negativo+derecha
  while(x>angulof+error||x<angulof-20){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
  Serial.println(angulof); 
 Serial.println("listoc reack");


}


void diferencia(){
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
int diferenci= abs(x-angulof);

if(diferenci>180){
diferenci=360-diferenci;
}

}


void iraizq(){
  //subir es mas derecha bajar mas izquierda
    int error=43;
      sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
 Serial.println(angulof); 

if(angulof<0){
  angulof= angulof+360;
   Serial.println(angulof); 

}    //       ESTE
  while(x>angulof+error||x<angulof-20){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
  Serial.println(angulof); 
 Serial.println("listoc reack"); 

}




void irader(){
    //subir es mas derecha bajar mas izquierdas
    int error=15;
      sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);

   Serial.println(angulof); 

  if(angulof>360){
  angulof-=360;
   Serial.println(angulof); 

}
 x = orientationData.orientation.x+sumang;

                           // ESTE
  while(x>angulof+20||x<angulof+error){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
   Serial.println(angulof); 
 Serial.println("listoc reack"); 

}

void girarizq290(){
    //subir es mas derecha bajar mas izquierda
  int error=38;
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
angulof=angulof-90;
   Serial.println("ANGULO ESPERADO");
 Serial.println(angulof); 

if(angulof<0){
  angulof= angulof+360;
   Serial.println("ANGULO ESPERADO"); 
   Serial.println(angulof); 
   delay(1000);

}                    //cambiaestevalor        positivo+izquierda       negativo+derecha
  while(x>angulof+error||x<angulof-20){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
  Serial.println(angulof); 
 Serial.println("listoc reack");


}