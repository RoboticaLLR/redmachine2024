// Declaración de Librerias
#include <Servo.h> // Libreria para el uso del servo

#include <NewPing.h> // Libreria para el uso de los ultrasonidos 

//Pines del ultrasonido izquierdo
#define TRIGGER_sensor_1  8
#define ECO_sensor_1  9

//Pines del ultrasonido central
#define TRIGGER_sensor_2  25
#define ECO_sensor_2  24

//Pines del ultrasonido derecho
#define TRIGGER_sensor_3 12
#define ECO_sensor_3  11

// maxima distancia que puede detectar el ultrasonido
#define MAX_DISTANCE 10000000000000

//Declaracion de los sensores ultrasonidos (libreria NewPing.h)
NewPing sensor_1 (TRIGGER_sensor_1, ECO_sensor_1, MAX_DISTANCE);//di
NewPing sensor_2 (TRIGGER_sensor_2, ECO_sensor_2, MAX_DISTANCE);//d
NewPing sensor_3 (TRIGGER_sensor_3, ECO_sensor_3, MAX_DISTANCE); //dd

Servo pro; // Declaracion del servo
int d = 0; // Distancia ultrasonido central
int a = 0; // Variable para definir la orientacion del giro
int giro = 0; // Contador del numero de giros
int rec= 52; // Valor del servo ir derecho
int vel= 255; // velocidad
int gi=vel; // velocidad de giro
int dd; // Distancia ultrasonido derecho
int di; // Distancia ultrasonido izquierdo 
int izquierda = rec+40; // Valor del servo para girar a la izquierda
int derecha = rec-40; // Valor del servo para girar a la derecha

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
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);  
  pinMode(12, OUTPUT); 
  pinMode(13, OUTPUT);  
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
  pro.attach(13);  // Pin de control del servo
  digitalWrite(52,HIGH);
  Serial.begin(9600); // Inicializacion del monitor serial


 pro.write(rec);
while(digitalRead(51)==HIGH){ // Boton de inicializacion 
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

if((d<50)&&(d!=0)&&(a==0)){
  if(di<50){ // Definicion giro horario
    a=2;
  pro.write(derecha);
  Serial.println("a2");
  Serial.println(d);
  delay(800);
  pro.write(rec);
  delay(400);
  giro++;
  analogWrite(6,vel);
  Serial.println("a2");
  }

  if(di>50){ // Definicion giro antihorario
    a=1;
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
}
    
// Si detecta un ultrasonido=
di= sensor_1.ping_cm();

 if ((di<15)&&(di>0)){ // Correccion cuando el ultrasonido izquierdo detecte
  pro.write(derecha);
  delay(100);
  pro.write(rec);
  delay(100);
   Serial.println("di");
  }
  


d= sensor_2.ping_cm();

  if ((d<55)&&(d>0)&&(a==2)){ // Giro horario
  pro.write(derecha);
  Serial.println("a2");
  Serial.println(d);
  delay(1000);
  pro.write(rec);
  delay(400);
  giro++;
  analogWrite(6,vel);
  Serial.println("a2");
  }

  if ((d<50)&&(d>0)&&(a==1)){ // Giro antihorario
  pro.write(izquierda);
  Serial.println("a1");
  Serial.println(d);
  delay(650);
  giro++;
  pro.write(rec);
  delay(400);
  analogWrite(6,vel);
   Serial.println("a1");
  }

  
  dd= sensor_3.ping_cm();

   if ((dd<15)&&(dd>0)){ // Correccion cuando el ultrasonido derecho detecte
  pro.write(izquierda);
  delay(100);
  pro.write(rec);
  delay(100);
  
  Serial.println("dd");
  }


//detectar 3 vueltas y detenerse
if(giro>11){
  delay(900);
  digitalWrite(52,LOW);
   analogWrite(2,0);
}
}
 

