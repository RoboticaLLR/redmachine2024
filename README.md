# Engineering Documentation / Red Machine 

This repository contains all the materials necessary to create "Luka", the self-driving robot created by the "Red Machine" team, which will participate in the Future Engineers category at the World Robot Olympiad international final in the 2024 season.


![Luka`s front](https://github.com/user-attachments/assets/cb8bf7b5-eaee-497f-9a00-b02afdd8bf22)


# Contents

 -  [Red Machine members](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Red-Machine-Members)
 -  [Introduction](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Introduction)
 -  [Mechanical design](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Mechanical-Design)
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

![Luka`s right](https://github.com/user-attachments/assets/7adb4b68-6ba3-44b4-b7dc-02d3c609dd1a)
   
![julian de lado 2024 2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/c3f7801c-d940-4992-b78f-98beb0f70ac8)  


Likewise, the size of the robot was reduced by approximately 5 centimeters, helping the robot to be freer on the playing field, and making it easier to meet the challenges. To achieve this, the acrylics were redesigned, with the new ones having a completely different structure from the previous one.
![acrilicos luka pequeño1](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/93bda588-5d18-4f1c-8973-c6c9f80af70f)

Another very important change was to redesign the steering system, which was again built with Lego pieces, coming from the spike prime robotics kit number 45678. 3 of these pieces were joined with a pair of wheels to finish its construction.

![foto sistema direccion  1](https://github.com/user-attachments/assets/fb4946ed-f055-4171-9542-48f1bef775e9)



In the same way, a 3D design was made, where we could see and efficiently analyze everything related to the robot.
### right
![WhatsApp Image 2024-11-13 at 13 52 58_05e5de05](https://github.com/user-attachments/assets/0b5c060e-33ad-4477-b3c4-377615a6cf7b)
### Left
![WhatsApp Image 2024-11-13 at 13 54 51_21982268](https://github.com/user-attachments/assets/3b6c59b8-5937-493e-82a6-7f05f8257ca6)
### Front
![WhatsApp Image 2024-11-13 at 13 53 22_d6ef839f](https://github.com/user-attachments/assets/0f04d1ab-3092-4d91-9025-a2c85ab1c4a4)
### Back
![WhatsApp Image 2024-11-13 at 13 52 30_cd6ade6e](https://github.com/user-attachments/assets/e959fc69-fd42-4a32-8b51-ee0cc8c62794)
### Above
![WhatsApp Image 2024-11-13 at 13 55 55_4ce29d41](https://github.com/user-attachments/assets/279e3c23-2072-4bb1-bf15-aab938d821c9)
### Below
![WhatsApp Image 2024-11-13 at 13 56 54_399b5e24](https://github.com/user-attachments/assets/ee7c4b06-4de3-42b4-be29-2a76cc698b72)





# Software Design

1. Image analysis
    -  [Image Processing](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Image-Processing)
    -  [Color detection](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md##Color-detection)
    - [Programming](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md##Programming)
2. [Robot movement]
    - [Servo Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md#Servo-Determination)
    - [Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Orientation)
    - [Gyroscope Sideturns](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Gyroscope-Sideturns)
    - [First Challenge](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#First-Challenge)
    - [Correction](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Correction)
    - [First Challenge parking](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#First-Challenge-parking)
    - [Obstacle Challenge](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Obstacle-Challenge)
    - [Detection of Pillars](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Detection-of-Pillars)
    - [Movement through Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Movement-through-Orientation)
    - [Pillar avoidment First Lap](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Pillar-avoidment-First-Lap)
    - [Post-first sideturn](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Post-first-sideturn)
    - [Pillar storage](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Pillar-storage)
    - [Second and Third Lap Strategy](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Second-and-Third-Lap-Strategy)
    - [Next Pillar](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Next-Pillar)
    - [Sideturns](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Sideturns)
    - [Parking Obstacle Challenge](https://github.com/RoboticaLLR/redmachine2024/blob/main/src/Code.md/#Parking-Obstacle-Challenge)



## Electronic components
Arduino Mega 2560: Is a microcontroller board based on the ATmega2560. It has 54 digital input/output pins and 16 analog inputs, a 16 MHz crystal oscillator, a USB connection, a power jack, an ICSP header, and a rexset button. The arduino is the board that contains the code that allow luka to accomplish the challenge, using the sensors data to make the necessary movements.

![mega 2560](https://github.com/user-attachments/assets/edc71e77-3581-48eb-af96-6dfae65660ac)


H-bridge: It is a type of electrical circuit that allows changing the polarity of a direct current motor, forward and reverse. The H-Bridge model used is the L298N, which allows us to change the speed depending on the voltage sent by the Arduino.

![puente H pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/264757f2-118f-42c9-9dd8-2a3c91455834)

Ultrasonic sensor: It is a sensor that uses ultrasonic sounds to detect the bounce time of sound from one side to the other. Using the Arduino Mega 2560 we can determine the distance based on the time it takes for the wave to return, performing the function of determining when there is a wall nearby, and thus making the corresponding turn.

![HC-sr04](https://github.com/user-attachments/assets/a59b0102-8994-4ac4-aa06-3d6553ae1a2d)

Giroscope: It is a sensor that measures the orientation of the robot in degrees. It is used to be able to do 90° turns and to avoid the traffic signs. 

![BNO055](https://github.com/user-attachments/assets/02c487ce-d624-411f-9db3-a2a3ef82a514)

Pixy 2.1: it`s a camera that has saved values that correspond to the rgb colors of the traffic signs. Then the camera searchs for those values on the pixels of the image and, when a color is detected, pixy sends the data to the arduino to avoid the traffic signs. 

![pixy2 1 2](https://github.com/user-attachments/assets/6397d5c9-d6fe-4c80-a7b9-d097bee0ba3e)


Rev Robotics servo motor: An electric motor with an integrated position feedback sensor, which allows perfect angular movements to be made, using a signal that goes from 0V to 5V, where each value that the voltage may have represents an exact angle, fulfilling with excellence the function of performing the turns.

![servo pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/57aaa91d-b5e5-4360-aef2-06025d15f8b0)

Electric motor: A device that converts electrical energy into mechanical movement, allowing in this case to move a gearbox and mobilize the wheels. The speed and torque it has are determined by the voltage sent through the H-bridge, being moderated by the Arduino.

![motor pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a74aacac-0276-49b0-abc1-485906c2a775)


The Arduino is powered by three 9v battery, which is turned on using a switch, and is responsible for feeding and giving the respective signals to the servomotor, so that it is able to make the crossings effectively with ease; the giroscope and two ultrasonic sensors, in addition to giving and receiving signals from the rest of the sensors. 

Lastly, the H-bridge is connected and powered by three 3.7v battery and is turned on with the same switch that turns on the Arduino.
The H-bridge receives signals from the Arduino that indacates to move the motor in different directions and speeds. It is also responsible for powering two ultrasonic sensors. 

# Luka Performance Videos 
 - [First challenge (ALL POSIBILITIES)](https://www.youtube.com/watch?v=auAgh7E2WA8)

[![image](https://github.com/user-attachments/assets/ed1c0d5b-dab7-4e8b-98aa-dfcefc9b1e91)](https://www.youtube.com/watch?v=auAgh7E2WA8)
 

 - [Second challenge practice](https://www.youtube.com/watch?v=cjjnRDXaDAU)

[![image](https://github.com/user-attachments/assets/b4dc474c-5cb7-4fe4-aece-13e8c19d635f)](https://www.youtube.com/watch?v=cjjnRDXaDAU)




# Mechanical index
For more information about the mechanics, we created a document where you can consult the specifications of the parts and mechanisms of the robot.

-  [Motors](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Analisis-del-funcionamiento-de-los-motores)
- [Sensors](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Sensors)
-  [Camera](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Camera)
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
- [October 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#October-2024)
- [November 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#November-2024)
3. Julian´s and Luka´s history 
- [JULIAN 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-1.0)
- [JULIAN 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-2.0)
- [JULIAN 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-3.0)
- [JULIAN 4.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-4.0)
- [JULIAN 5.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-5.0)
- [LUKA 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-1.0)
- [LUKA 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-2.0)
- [LUKA 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-3.0)