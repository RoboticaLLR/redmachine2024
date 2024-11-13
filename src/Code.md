
# Software Design

1. Image analysis
    -  [Image Processing](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Image-Processing)
    -  [Color detection](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md##Color-detection)
    - [Programming](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md##Programming)

2. Robot Movement
    -   [Servo Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Servo-Determination)
    -  [Movemente through Pillars](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Movement-around-Pillars)
    - [Lane Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Lane-Movement)
    - [Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Orientation)
    -  [Movement through Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Movement-through-Orientation)
    General function
Servo determination
Orientation
Gyroscope Sideturns
First Challenge
Correction
First Challenge parking
Obstacle Challenge 
Detection of Pillars
Movement through Orientation
Pillar avoidment First Lap
Post-first sideturn
Pillar storage
Second and Third Lap Strategy
Next Pillar
Sideturns 
Parking Obstacle Challenge


# Image Processing
To process the image, Luka uses one camera. This is the pixy2. 

![pixy2.1](https://github.com/user-attachments/assets/46298b4d-2184-4b40-9b81-577219ed9214)

The pixy2 works at 60 fps, and is able to detect objects, lines and colors. On luka the main objetive of the camera is to detect colors (red and green). 
its connected to the arduino with an IDC 2 ICSP Arduino cable that goes into the arduino ICSP pins, wich provides all the connections needed to power and communicate with the pixy. 

## Color detection
Pixy2 uses a color-based filtering algorithm to detect objects called the Color Connected Components (CCC) algorithm. Pixy2 calculates the color (hue) and saturation of each RGB pixel from the image sensor and uses these as the primary filtering parameters. The hue of an object remains largely unchanged with changes in lighting and exposure. Pixy2's CCC algorithm remembers up to 7 different color signatures.

After a color is saved on a color signature, the pixy will add it to a table of objects that it is currently tracking and assign it a tracking index. It will then attempt to find the object (and every object in the table) in the next frame by finding its best match. Each tracked object receives an index between 0 and 255 that it will keep until it either leaves Pixy2's field of view. 

![color_tracking](https://github.com/user-attachments/assets/46d2f0c5-c726-4a08-a899-b9a19b0e1dee)


## Programming 
To set the colors that the camera should detect, the team uses pixymon. PixyMon is an application that runs on Windows, MacOs and Linux. It allows you to see what Pixy2 sees, either as raw or processed video. It also allows you to configure your Pixy2, set the output port and manage color signatures. PixyMon communicates with Pixy2 over a standard mini USB cable.

![Screenshot 2024-11-11 103435](https://github.com/user-attachments/assets/f58a573e-7a54-49de-9017-4953aa863677)

On pixymon the team set 6 signatures, three for green and three for red. Signatures 1, 3 and 5 for red, and signatures 2, 4 and 6 for green. 

After this the arduino proccesing needed to be done. 

On the arduino, the team uses the pixy2 library, which allows to obtain all the information needed from the pixy detection. Then, using the following code, the team saves when the pixy detects a color and which signatures does the color correspond to on a variable called "hola". If hola is divisible by two, then the color is green, and if hola isn't dividible by two, then the color is red. 

- [Pixy code](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)


# General function of robot

## Servo Determination

The servo motor is set to pin 2 of the arduino, where it is configured using the `pro.attach(2)` command and can also be moved using the `pro.write()` command used throughout the code.


## Orientation
With the ultrasound sensors we detect where the walls are and when we reach a curve we define whether it is necessary to cross to the right or to the left (stored as 1=counterclockwise, 2=clockwise), saving us problems with the lines of the floor. This can be made because the car crashes with the wall, allowing us to know when he is on a sideturn. This part of the code occurs when the program begins.

    if((d<50)&&(d!=0)&&(a==0)){
    if((di<80)&&(d!=0)){ // Definicion giro horario
    a=2;
    pro.write(derecha);
    Serial.println("a2");
    Serial.println(d);
    delay(1800);
    pro.write(rec);

    giro++;
    analogWrite(2,vel);
    Serial.println("a2");
    delay(500);
    }

    if((di>80)||(di==0)){ // Definicion giro antihorario
    a=1;
    pro.write(izquierda);
    Serial.println("a1");
    Serial.println(d);
    delay(1400);
    giro++;
    pro.write(rec);

     analogWrite(2,vel);
    Serial.println("a1");
     }
     d=sensor_2.ping_cm();
     delay(500);
}

## Gyroscope Sideturns

The gyroscope is essencial on the sideturns part, we use a gy-97 BNO055 and a the Euler Angles to get a combination from both magnetometer and acelerometer included on the sensor, this way we get precise angles, without any drifting that any acelerometer has. 

How we implemented in the code was in order for 6 functions. There are Girarizq90, Girarder90, iraizq, irader, iraizq2, irader2. These functions are intended to make both 90 degrees sideturns, and return to the way its supposed the robot to face. These works by establishing a variable "angulof" that works as the expected angle. Then a loop is responsible to check if it its near to that angle and declared as a correct orientation.

All this functions can be seen on 
- [Gyroscope Functions](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)

# First Challenge


## Correction

Even though Gyroscope give us a precise angle, sometimes we can face diferent problems because of the robots, or walls implemented on the Challenge. Thats why we created a pretty simple rectification system that prevents Luka crashing against the Walls.

This Correction works by the 2 ultrasonic sensor on both sides of the robot. When the distance between the robot and the wall is small, we make a short movement either to the  left or to the right to avoid the Challenge to end.The code we use is the next one:

    if (((dd<15)&&(dd>0)&&(giro!=0)&&(d>100))||((dd<15)&&(dd>0)&&(giro!=0)&&(d==0))){
    pro.write(izquierda);
    delay(300);
    pro.write(rec);
    delay(300);
    }
     if (((di<15)&&(di>0)&&(giro!=0)&&(d>80))||((di<15)&&(di>0)&&(giro!=0)&&(d==0))){
    pro.write(derecha);
     delay(300);
     pro.write(rec);
      delay(300)
        }

This part of the code can also be found on 
- [Correction](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)

## First Challenge parking


Every time we do a side turn, we increment in 1 the variable giros, once we detected this variable is equal to 11 we can me sure its the final track, so we just turn in 90 degrees and go forward 3 seconds.

    if(giro>11){
    di=sensor_1.ping_cm();
    dd=sensor_3.ping_cm();
    d=sensor_2.ping_cm();
     delay(3000);
     
    digitalWrite(adelante,LOW);
    analogWrite(2,0);
        }

# Obstacle Challenge



##  Detection of Pillars
Once it receives the information from the pixycam, it can move to the left or right depending on the cone it has detected. We use a simple algorithm to detect which is the biggest traffic sign, this way it doesnt gets affected with any other red or green sign on the enviroment

```
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

```

> [!IMPORTANT]
> It can still be affected by other objects if theres any pillars or havent detected anything.

> [!IMPORTANT]
> This algorithm has been asigned to the function "detectarconos" and repeats each iteration




## Movement through Orientation

Once we detect the direction and are aware of the lane we are in, we make a pre-programed movement, this way we only programmed 6 possible sideturns for the first lap.  They may change by the lane, orientation and spot of the track.

    After every sideturn each variable such as cono1 and cono2 and carril are reestablished to zero and we add 1 to "giros" and "vuelta". All posible sideturns are located at "Sideturns first lap" link.


- [Sideturns first lap](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)

## Pillar Avoidment First Lap


The main strategy to avoid crashing against the pillars is knowing where the robot is. Thats why we implemented the easiest way we could think and thats by establishing 3 lanes(middle, left and right). This way we only need to worry about the movement between these lanes, and not to exactly calculate the distance between pilars.

How the robot avoids the pillars is by avoiding one or two maximum pillars. This way we only prepared 2 sideturns for the first pillar (red or green) and then 2 sideturns for the second pillar (left to right and right to left). This change of lane is very easy with the implementation of an Gyroscope.



> [!TIP]
>   Movement is made by "esquivarconos" and the storage of the pillars is by "contarconos"

- [Esquivarconos](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)
- [Contarconos](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)

## Post-first sideturn

The robot detects and evade every pillar using the same strategy, this time it has already storaged the orientation and beacuse of our sideturn strategy it always begins at the middle of the track, this way we also know the lane we are.

    At the last part of the path the robots reduces all its moves due to the posibility to crash against the parking lot 
> [!TIP]This part of the code uses the functions "cruzar" and "esquivarconos"

- [Cruzar](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)
- [Esquivarconos](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)

## Pillar storage
General function
Servo determination
Orientation
Gyroscope Sideturns
First Challenge
Correction
First Challenge parking
Obstacle Challenge 
Detection of Pillars
Movement through Orientation
Pillar avoidment First Lap
Post-first sideturn
Pillar storage

Every time we detect a pillar we store them on a group of variables depending on the part of the track it is and if its the second or the first pillar it detects. Thats why after the first lap we dont have any need to use the camera or to make very long sideturns
> [!TIP] The way we separated is: The first number means the part of the track, the second number means if it either goes first or second on the track. Example Cono12 (first lane, second pillar)

# Second and Third Lap Strategy



## Next Pillar

A very important part for the Second and Third lap Strategy is the first pillar on the next part of the track. We use the function "proxicono" to detect it

It works by defining it what part of the track the robot is, and finding the next code with the variables that store them. You can also check the function at:

- [Proxicono](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Pixy.ino)

## Sideturns


Once we completed the first lap, the Sideturns only require the Gyroscope and one ultrasonic sensor. We calculate the distance with the wall perpendicular against us, we use the "proxicono" function to know what are we supposed to avoid. This way depending on the side we have to go and the orientation it makes a shorter or larger path to avoid it.



> [!IMPORTANT]
> If this change its not made, the robot would not be able to complete the obstacle challenge in 3 minutes.

> [!TIP]
> This part of the code is defined on the funcion "giroscompleta"


> [!NOTE]
> This  simple change saves us around 30 seconds per lap, this way we get enough time to make the entire challenge

## Parking Obstacle Challenge

As we know the robot will always be on an exact lane, we can assume it will never detect with the ultrasonic sensor a pillar, thats why the parking strategy only includes the ultrasonic sensor and the Gyroscope

    if(giro==12&&d<120){
    delay(800);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    delay(3000);
    digitalWrite(2,0);
    delay(10000000);
    }


> [!IMPORTANT]
> If the robot its more than 20 cm it wont be able to complete the parking lot, as the way it stop is completely parallel to the parking



