# Engineering Documentation / Red Machine 

This repository contains all the materials necessary to create "Luka", the self-driving robot created by the "Red Machine" team, which will participate in the Future Engineers category at the World Robot Olympiad international final in the 2024 season.


![luka2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/100c6890-de82-4203-baa2-43cbf61999da)

# Contents

 -  [Red Machine members](https://github.com/RoboticaLLR/redmachine2024/blob/main/Readme.md#Red-Machine-Members)
 -  [Introduction](https://github.com/RoboticaLLR/redmachine2024/blob/main/Readme.md#Introduction)
 -  [Mechanical design](https://github.com/RoboticaLLR/redmachine2024/blob/main/Readme.md#Mechanical-Design)
 -  [Software design](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Software-Design)
 -  [Mechanical Index](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Mechanical-Index)
 -  [Team history](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Team-History)

# Red Machine Members
-Samuel Jose Galban Franco

-Juan Diego Cano Barros

-Angel Saul Rodriguez Guerra

![red machine 2024](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/d5bb5fc0-b1bd-47a8-9ac3-c190587ae5ae)

   
# Introduction
We have done our best to make the best robot possible. It has been a very long road and learning programming, mechanics and design has helped us a lot. After much thought and analysis we have created our own strategy based on the electronic components we had, fervently believing that it will perform well in this edition of the WRO.

# Mechanical design
During the 2023 season, the design of the robot was always one of the biggest problems the team faced, this during all phases of the competition. The acrylic bases that were used in the first competitions did not work, since they had many imperfections, causing the traction and steering system to be poorly located, as well as a really bad distribution. Despite all this, that chassis gave us an idea of ​​how to design a new one, so after the 2023 national competition, new acrylic bases were used, this time laser cutted. After this, the chassis looked really good in all aspects.

![bases de acrilico pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1ab2bf5b-492d-4d9f-b8cb-7154f9053f9f)

In addition, the robot's wheels were changed with new ones that held better to the steering system, which also provided better aesthetics to the robot.

After participating in the World Cup in Panama, the team decided to make important changes when creating the new prototype. 
Among these changes, the closer between the wheels of the traction and steering system stands out, with the aim of increasing the turning radius, allowing tighter turns. This mainly helps the development of the obstacle challenge, due to the difficulty of the challenge, and the strategy the team wishes to use.

![luka de lado 2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/2f49965b-2c4d-478c-abf1-3842ebd0ab83)   
![julian de lado 2024 2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/c3f7801c-d940-4992-b78f-98beb0f70ac8)  


Likewise, the size of the robot was reduced by approximately 5 centimeters, helping the robot to be freer on the playing field, and making it easier to meet the challenges. To achieve this, the acrylics were redesigned, with the new ones having a completely different structure from the previous one.
![acrilicos luka pequeño1](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/93bda588-5d18-4f1c-8973-c6c9f80af70f)

Another very important change was to redesign the steering system, which was again built with Lego pieces, coming from the spike prime robotics kit number 45678. 3 of these pieces were joined with a pair of wheels to finish its construction.

![sistema direccion2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/9d33071c-ba41-47bc-8b42-ef2623d5b0dd)



In the same way, a 3D design was made, where we could see and efficiently analyze everything related to the robot.
### right
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/0364d856-0c1f-4acb-b7b7-736befe48c29)
### Front
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/2e0cb5f8-766f-4ef3-ac54-ce97839b3b43)
### Left
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/60cefae2-e63a-47f8-9d52-f64e386c134e)
### Back
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/de874051-7a95-4c22-b036-3004a4ecf061)
### Above
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/825a1b6c-bec4-4b58-83b7-381921703ff1)
### Below
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/ad9235b4-6f95-4a00-a3c7-1abaec18f783)





# Software Design

1. Image analysis
    -  [Image Processing](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Image-Processing)
    -  [Image Filter](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Image-Obtention)
    - [Red and Green Masks creation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Red-Green-Masks)
    -  [Gray image](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Gray-Image)
    -   [Color Detection](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Color-Detection)
    -  [Distance Processing](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Distance-Processing)
    - [Data send to Arduino](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Data-send-to-Arduino)
2. [Robot movement]
    -   [Servo Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Servo-Determination)
    -  [Movemente through Pillars](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Movement-around-Pillars)
        - [Lane Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Lane-Movement)
    - [Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Orientation)
    -  [Movement through Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Movement-through-Orientation)

## Subcode

```
//Cone detection (Raspberry pi 5)
Put filter on the image
Distinguish between red and green
Define your distance
Send information to the arduino
//Robot Movement
Lane determination
Identification of cones
Wall reading
Wall turns
```

> [!IMPORTANT]
> Each iteration lasts approximately 20 ms.


## Electronic components
Arduino Mega 2560: Is a microcontroller board based on the ATmega2560. It has 54 digital input/output pins and 16 analog inputs, a 16 MHz crystal oscillator, a USB connection, a power jack, an ICSP header, and a reset button. The arduino is the board that contains the code that allow luka to accomplish the challenge, using the sensors data to make the necessary movements.

![arduino mega 2560 pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1b59a507-53a0-48d4-b9d8-0b8b94bf1d2d)


H-bridge: It is a type of electrical circuit that allows changing the polarity of a direct current motor, forward and reverse. The H-Bridge model used is the L298N, which allows us to change the speed depending on the voltage sent by the Arduino.

![puente H pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/264757f2-118f-42c9-9dd8-2a3c91455834)

Ultrasonic sensor: It is a sensor that uses ultrasonic sounds to detect the bounce time of sound from one side to the other. Using the Arduino Mega 2560 we can determine the distance based on the time it takes for the wave to return, performing the function of determining when there is a wall nearby, and thus making the corresponding turn.

![ultrasonido pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/e8f17278-35e8-451b-9eb3-8465666ceec9)

Giroscope: It is a sensor that measures the orientation of the robot in degrees. It is used to be able to do 90° turns and to avoid the traffic signs. 

![BNO055](https://github.com/user-attachments/assets/02c487ce-d624-411f-9db3-a2a3ef82a514)

Rev Robotics servo motor: An electric motor with an integrated position feedback sensor, which allows perfect angular movements to be made, using a signal that goes from 0V to 5V, where each value that the voltage may have represents an exact angle, fulfilling with excellence the function of performing the turns.

![servo pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/57aaa91d-b5e5-4360-aef2-06025d15f8b0)

Electric motor: A device that converts electrical energy into mechanical movement, allowing in this case to move a gearbox and mobilize the wheels. The speed and torque it has are determined by the voltage sent through the H-bridge, being moderated by the Arduino.

![motor pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a74aacac-0276-49b0-abc1-485906c2a775)


The Arduino is powered by three 9v battery, which is turned on using a switch, and is responsible for feeding and giving the respective signals to the servomotor, so that it is able to make the crossings effectively with ease; the giroscope and two ultrasonic sensors, in addition to giving and receiving signals from the rest of the sensors. 

Lastly, the H-bridge is connected and powered by three 3.7v battery and is turned on with the same switch that turns on the Arduino.
The H-bridge receives signals from the Arduino that indacates to move the motor in different directions and speeds. It is also responsible for powering two ultrasonic sensors. 

# Luka Performance Videos 


# Mechanical index
For more information about the mechanics, we created a document where you can consult the specifications of the parts and mechanisms of the robot.

 -  [Motors](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Analisis-del-funcionamiento-de-los-motores)
 - [Sensors](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Sensors)
-  -[Camera](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Camera)
- [Controller boards](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Controller-cards)
 - [Robot power](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Robot-power)
 - [Conexions diagram](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Conexions-diagram)

# Team history

1. 2023 Season
    - [July 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#July-2023)
    - [August 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#August-2023)
    - [September 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#September-2023)
    - [October 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#October-2023)
2. 2024 Season 
    - [February 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#February-2024)
    - [March 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#March-2024)
    - [April 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#April-2024)
    - [May 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#May-2024)
    - [June 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#June-2024)
3. Julian´s and Luka´s history 
    - [JULIAN 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-1.0)
    - [JULIAN 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-2.0)
    - [JULIAN 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-3.0)
    - [JULIAN 4.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-4.0)
    - [JULIAN 5.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-5.0)
    - [LUKA 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-1.0)
    - [LUKA 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-2.0)
