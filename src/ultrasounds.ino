// In here all the ultrasounds programing will be explained

#include <NewPing.h> // The library "NewPing" is used because it allow us to use more than a single ultrasound at the same time. In Luka's case there are four of them

// The next variables will be used to collect the values of each ultrasound
int d // In 'd' the value of the front ultrasound is saved
int dd // In 'dd' the value of the right ultrasound is saved
int di // In 'di' the value of the left ultrasound is saved
int da // In 'da' the value of the back ultrasound is saved

//Next, we assign an arduino pin to every trigger and eco

//left ultrasound
#define Trigger_sensor_1  8
#define ECO_sensor_1  9

//front ultrasound
#define Trigger_sensor_1  29
#define ECO_sensor_1  28

//right ultrasound
#define Trigger_sensor_1  12
#define ECO_sensor_1  11

//back ultrasound
#define Trigger_sensor_1  6
#define ECO_sensor_1  7

// The maximun distance the ultrasounds can measure
#define MAX_DISTANCE   100000000 

//After this, we take the values to declare the sensors
NewPing sensor_1 (TRIGGER_sensor_1, ECO_sensor_1, MAX_DISTANCE) // left sensor
NewPing sensor_2 (TRIGGER_sensor_2, ECO_sensor_2, MAX_DISTANCE) // front sensor
NewPing sensor_3 (TRIGGER_sensor_3, ECO_sensor_3, MAX_DISTANCE) // right sensor
NewPing sensor_4 (TRIGGER_sensor_4, ECO_sensor_4, MAX_DISTANCE) // back sensor

void setup(){
// On the setup we declare the pin modes. Inputs for every eco and output for every trigger

pinMode(8,OUTPUT);
pinMode(9,INPUT);
pinMode(29,OUTPUT);
pinMode(28,INPUT);
pinMode(12,OUTPUT);
pinMode(11,INPUT);
pinMode(6,OUTPUT);
pinMode(7,INPUT);

Serial.begin(115200); // The serial port is inicialized

}

void loop(){
  // in the loop the values of the ultrasounds are collected and used to know where and when to turn 
  // Using the variables declared before, the values of the ultrasound are collected
  di=sensor_1.ping_cm(); // left ultrasound
  d=sensor_2.ping_cm(); // front ultrasound
  dd=sensor_3.ping_cm(); // right ultrasound
  da=sensor_4.ping_cm(); // back ultrasound

  // Then we use the collected values on 'if' or 'while' conditionals, to tell the robot to do something when a distance is equal, less or more than the one we want.
  
  if(d>4&&d!=0){       // In this example, when the distance of the front sensor is less than 4 and more than cero, the value of the distance is printed on the serial monitor
    Serial.print(d);
  }


}