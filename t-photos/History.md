# Read Machine history

1. 2023 Season
    - [July 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#July-2023)
    - [August 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#August-2023)
    - [September 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#September-2023)
    - [October 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#October-2023)
2. 2024 Season
    - [February 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#February-2024)
    - [March 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#March-2024)
    - [April2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#April-2024)
    - [May 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#May-2024)
    - [June2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#June-2024)
    - [October2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#October-2024)
    - [November2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#November-2024)
3. Julian´s and Luka´s history 
    - [JULIAN 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-1.0)
    - [JULIAN 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-2.0)
    - [JULIAN 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-3.0)
    - [JULIAN 4.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-4.0)
    - [JULIAN 5.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#JULIAN-5.0)
    - [LUKA 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-1.0)
    - [LUKA 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-2.0)
    - [LUKA 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/History.md#LUKA-3.0)
    
## 2023 Seeason

### July 2023

After participating in a regional robotics competition, the team decided to participate in the WRO, specifically in Future Engineers; So as a first step, the team began to study and analyze the rules of the competition. 

![1ra julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/66f7c8f1-b10c-4261-86b3-32c87bcd3b81)

The following days the team began to study what could be the first model of the chassis and investigated various ways to solve what would be the first problems that arose, which were how the steering system would be designed and what engine would be used to achieve the speed and torque needed.

![2da julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/3c73dc50-b3c4-4f2d-a4ad-92f87ee21a87)

Next, the team began to look for engines that could be used, disassembling toys, printers, among other devices, to which the necessary engine was finally obtained by disassembling a remote control car model: Dodge T-rex Ram from the Nikko brand, which provided the necessary mechanical parts to design the steering system.

![3rajulio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/dbdfbd4e-9594-40f0-b34e-6d0528d7b328) ![4julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/32158385-5185-4d74-b19a-fd5dca851590)

Subsequently, the team proceeded to assemble both systems, and the different devices that the robot would need on acrylic bases, and the first prototype of what would be the chassis was completed, and the programming area could continue.

![5julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/5d1d2414-1c38-4973-b7b8-8c7c55b3b648)

For programming, an Arduino mega 2560 was used as a programmer, a double H-bridge as a power and speed regulator, and an ultrasound sensor to measure distance. Consecutively, the work team resumed the search for different solutions to detect the colors of traffic lights, deciding to use an ESP32-cam camera with an OV2640 lens, the next problem being how to program this with Arduino.

![6julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/eb1e7891-75de-4a19-87ab-400c2de48bbc)

It was investigated what power source was going to be used to power the robot, because after using 9V batteries, the team realized that these were not ideal for the robot because they wear out in a very short time. Consequently, two battery packs ended up being joined, which had eight 1.2V rechargeable batteries in series, which finally added up to a total of 9.6V. 

Due to the space needed, a second prototype was designed in which it was decided to add a second floor to the robot, locating the electronics area in it, and the batteries, the traction system and the steering system on the first floor.

![7julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/aa52095a-ea01-412f-901e-da4eb791124c)

Without yet being able to solve the programming, it was decided to use a 34725 RGB sensor so that the robot detects in which direction it should cross.

![8julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e1047aac-374b-4cdb-8531-4b916cac0f36)

A strategy is proposed: it is decided to cross with the color detection of the lines of the track, also using two more ultrasounds, one on each side of the robot, so that, once it detects a wall, it crosses to avoid a crash. However, these two ultrasounds did not mean help, but rather a problem, since, when they detected, the robot lost its trajectory, which is why it was finally decided not to use these two ultrasound sensors.

![9julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/c96458f7-a354-4cbc-b139-bbab67d7a71c)

Before the competition, the team found rechargeable batteries with a higher voltage (3.7V), so it was decided to eliminate one of the two battery packs, and modify the remaining one so that it works with 3 batteries.

![10julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/cab0ff29-43a8-4808-9a1b-f93d4ca45027)

### August 2023

After participating in the first regional competition, the search for solutions to the problems presented began. It was decided to change the steering system, creating a new one with parts obtained in a spike prime robotics kit number 45678, since with this new steering system it would be possible to have a greater turning radius, as well as a more precise turn. 

![1ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/2e470dc5-3636-41a1-9733-a62f20ae0db0)

New strategies were proposed, for which it was decided that the ideal way to cross would be with the help of ultrasound and that the TCS34725 sensor would only detect the first line to determine if the robot should cross clockwise or counterclockwise.

Continuing with the second part of the challenge, the team began to program the camera looking for how to transfer the information from the camera to the Arduino without needing to use Wi-Fi. After searching several sources, the solution was found, which was to transmit the information through serial ports.

Then the engine used for all this time began to fail very frequently, preventing the progress of the work team in the second challenge, so with a few days left before the competition the team removed the engine and therefore the gearbox from another Remote control car to attach to the robot.

![2ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6dbc1ef9-7d96-4ca5-839e-63c8bb6c3e24)

To provide a greater turning radius the steering system was modified using pieces from a Lego Spike Prime Kit.

![3ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/528c8a5c-2b6b-4996-9143-c09bb9472b1b)

### September 2023

Practices were carried out on the track, for the robot's performance in challenge number one and two to do the best job in the 2023 national championship. The report was prepared and updated according to what had been achieved so far, and then carry out practices on the track, to improve the robot's performance in challenge number one and two for the 2023 national championship.

![4ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e132722b-7d13-4236-8e9b-7d837b6f065d) ![5 ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/eb82c5c2-2d85-4bf3-a0a5-0326dc07f3d5)

The time has come for the national competition, in which the objective of qualifying for the 2023 WRO World Cup in Panama was achieved.

![sep2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/41c23672-ecf9-4970-a691-882c736f0801)![sep1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/454f09af-68c2-41fe-842e-51191bca02c3)
 

### October 2023

The programming of the camera for challenge number 2 continued. Changing the wheels of the steering system to increase safety and aesthetics and the construction of the third prototype of the robot began, which is based on the restoration of the acrylics, organization of the cables through connectors to improve the aesthetic part of the robot.

![sep3](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/38c0d5d6-7739-47c4-ac14-718439dbf9c6)

The time for the World Cup arrives, in which the team was in the top 25 worldwide, and top 2 among Latin American countries.

![oc1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/d7f5104d-0fcb-45c1-b448-8e1b9b5449bd)![oct2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/93173685-2fc5-4110-bf5e-b1adf484abe1)

## 2024 Season

### February 2024

The first thing the team did to start this season was study the new rule manual, to find the differences in the challenge and think about possible strategies for the new year.

![febrero 1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/543ccce4-e258-4f4d-ab56-94f6a3207c77)

The team began to design the new robot, taking into account everything learned at the World Cup. During this design, aspects such as size, weight, which components would be used, their position and the distance between the traction and steering systems were taken into account.

![feb2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e518fc97-dbcd-4631-86c7-ceff1295411f)

The team continued to think about what strategy to use. With the aim of not showing the advances and improvements that would be made in the new robot, it was decided that the best thing would be to participate again with Julián (robot of 2023) during the regionals, and participate with the new robot (Luka) in the national, which would be the greatest challenge of the moment.

![feb3](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/c918252f-6495-4227-b0c1-6020686d0f09)

### March 2024

During this month, the construction of the robot that will be used in the 2024 national competition began. In the first week of March, the acrylic bases were cut, and the missing components for the robot were purchased.
First, the traction system and the steering system were installed on the robot. At this time the steering system was constructed of 3 pieces of acrylic.  After this the arduino and raspberry were installed.

![feb4](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/23bb3e40-7f24-499d-9f17-81d077cd7c80)![feb5](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/bf47b801-3b39-4c64-8e48-dd82d7b7f9e9)

At the end of March, the construction of the robot was completed, after installing all the sensors that the robot would use. Likewise, programming for challenge 1 began, and python programming for challenge 2.

![feb6](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/ba34c027-6287-45b2-a1b7-981fea57a367)

### April 2024

Since the team decided to participate with Julián in the regionals, work began on some improvements for the operation of this robot. One of these improvements was the change from the 34725 RGB sensor to the TCS 3200 color sensor.

![feb7](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/48b506e4-a226-4501-9297-ab61940ddbd8)

With a view to the regional one that was approaching, the report was updated according to what had been achieved so far. The most important in this regard was the update of the chronology, the wiring diagram and the specifications of the color sensor.

![feb8](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e74d6b44-9a5a-4ff3-aa44-223e3d5b8257)

2024 regional competitions:

Colegio Santo Tomás de Aquino 04-05-2024
![feb9](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/0569d301-fa0c-444f-8521-f688f98e4dcd)

### May 2024
Liceo Los Robles 18-05-2024
![feb10](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/da1b210c-ddeb-4e1a-85d9-211e8c0ffc5c)


### June 2024

Looking ahead to the national, the team continued with the tests of both challenges, mainly the second; At the same time, the team made Luka's report.
During the tests, it was decided to remove the color sensor since it was not working in the best way, and the ultrasound sensors on the sides began to be used to know which side Luka should follow.

![jun1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/4ec63c83-89a8-4a1b-ab29-952e07b1f754)

The team managed to completely finish the report, and finished uploading the information to GitHub at the end of the month, being already prepared for the WRO 2024 national.

![JUN2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/ec3a2df2-7dff-4fec-b924-b2d1eb7ead83) ![JUN3](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/cd6712cd-9323-48ea-98b8-636553662499)


### October 2024

After winning the national competition, the team got to form part of the delegation that will represent Venezuela on the world robot olympiad internacional final, on izmir, Türkiye. For this, the team needed a lot of preparation and practice, so they started to work on Luka. 

On the first two weeks of preparation the team started to make structural changes on Luka, looking to make the robot smaller. To accomplish this, both the traction and direction system where moved. The direction system got turned 180 degrees for the wheels to be more on the front, and the motor of the traction system changed it’s position to be vertical, using less horizontal space. After this, there were around 5cm of dead space on the robot’s back that were cutted, finishing this process with the robot measuring 18cm. 

![motor comparation](https://github.com/user-attachments/assets/00b11495-df00-430e-b246-063aeed43f5f)
![Traction comparation](https://github.com/user-attachments/assets/34566443-f982-43b6-9cad-7033e43392aa)


The third week of work was the start point of programming. After having problems with the raspberry pi supply power, the team decided to search for a new way of detecting the traffic signs. After searching for a solution, the team decided to use a pixy cam because of it using less space, weighting less, and been able to power with the arduino. The team also realized that a giroscope would be needed, specially on the second challenge, so they started to use the HMS5883L magnetometer. 

![pixy2 1](https://github.com/user-attachments/assets/0d5ba0ac-d5ba-47c5-957f-c5cc7350b439)
![HMC5883L](https://github.com/user-attachments/assets/fdfc00e6-27a0-4843-81a8-c86973bba489)


The pixy cam resulted as an exellent choice, but the magnetometer was not, so the team started to find a new one, picking MPU6050. After a lot of practice with the accelerometer the team got to use it on the full turns, but because of large error margin the could not trust it to take the car to turn at exactly 90 degrees. 

![prueba pixy](https://github.com/user-attachments/assets/ba0a2a27-5e38-4ecf-aacf-253b168c61ea)
![MPU6050](https://github.com/user-attachments/assets/14ad7f2f-d015-4d14-b35c-de9057ae6749)


Because of this the team used the fourth week to design a new strategy. On this new strategy the robot caribrated with the exterior walls. 


### November 2024

The first week of november was purely preparation and practice. On this week the robot got to do two consistent laps on the second challenge, but the team was still worried about the giroscope problem. 

![ramdom practice](https://github.com/user-attachments/assets/0c77eda4-712e-47df-84f0-b20429e7cd49)



Because of this, on the second week of november the team started to practice with a new giroscope, the BNO055. This sensor is an hibridation of a magnetometer and an accelerometer, allowing it to give an almost exact data. 

![BNO055](https://github.com/user-attachments/assets/9bccdb43-f634-4808-92c7-ae4d567bc054)



## Julian´s and Luka´s history 

### JULIAN 1.0

![Primer Julian ](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/09cf93c9-366d-4cb8-a5c8-3ff131a1eefd)

### JULIAN 2.0

![segundo julian](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e478974d-5332-49b8-afac-896d01656986)

### JULIAN 3.0

![Tercer Julian](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/cdd24993-e070-411b-bbf5-a24d7a4b233f)

### JULIAN 4.0

![Cuarto Julian](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/074197a0-749a-46c5-a047-525aad2b035c)

### JULIAN 5.0

![Quinto Julian ](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/0ce756c7-e496-4795-b2be-6cf495847561)

### LUKA 1.0

![Primer Luka](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/72f9fc19-2931-4442-80e8-b228e3491019)

### LUKA 2.0

![Segundo Luka ](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/565f334d-1133-470b-ba16-1d1ea5e7b660)

### LUKA 3.0

![Luka`s right](https://github.com/user-attachments/assets/7adb4b68-6ba3-44b4-b7dc-02d3c609dd1a)
