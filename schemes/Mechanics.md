# Index
 -  [Motors](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Analysis-of-engines-operation)
 - [Sensors](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Sensors)
 - [Camera](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Camera)
 - [controller boards](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Controller-boards)
 - [Robot power](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Robot-power)
 - [Conexions diagram](https://github.com/RoboticaLLR/redmachine2024/blob/main/schemes/Mechanics.md#Conexions-diagram)


# Analysis of engines operation
In the following space, aspects of the operation of the 2 motors of our robot will be shown.

## Motor Core Hex 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6b746939-ccca-4912-8b1c-9ad4e71ff221)

- Pinout: The Core Hex motor uses a 2-pin JST-VH connector for motor power.

![i](https://github.com/user-attachments/assets/cb5b1293-0dfd-4212-b587-674aa33f21d3)

- Weight: 7 ounces

- Installation: To use this motor in the way the equipment needs it, a 5mm hexagonal shaft is used, from which one end emerges from each side of the motor. Said shaft has a length of 11.8cm, and its structure is made of stainless steel. At each end of this axle, a traction wheel was placed, whose diameter is 90mm. Finally these wheels were secured to the axle with collars, which have a set screw that tightens towards the axle.

![image](https://github.com/user-attachments/assets/8bef9bab-571f-4ab2-a236-f04a72f93711)

![image](https://github.com/user-attachments/assets/e6822eb6-4ea4-480e-8bea-89c9130ea8c0)

![image](https://github.com/user-attachments/assets/d6850397-0bf1-4e28-895d-833c83149a95)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/980cb8f4-5084-4b9c-bd1e-64fec1b01462)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/a078144d-4553-4803-a540-ab6f2e750554)

- Power: The motor power is specified below. 

- Torque: 3.2 N-m

- Operating voltage: 12V

- Free speed: 125 RPM


## Smart Robot Servo

![Screenshot 2024-11-08 103745](https://github.com/user-attachments/assets/473534ce-37d2-4f08-9721-a207be8490b3)


- Installation: A cut aluminum double servo arm was anchored to the Smart Robot Servo. Then a screw was placed in one of the entrances of the aluminum arm, which joined it with two pieces of Lego. A second screw joins the two Lego pieces mentioned above.  Likewise, two screws from the chassis were anchored in the third piece of Lego, so that it worked as a support. Finally the wheels were placed, which fit between the three Lego pieces.

![Screenshot 2024-11-08 103852](https://github.com/user-attachments/assets/43367d50-6ccf-498b-9c06-c9612c199d0e)


![foto sistema direccion 2](https://github.com/user-attachments/assets/d22ed9c8-2579-46ad-96a0-f00472432b56)


![foto sistema direccion  1](https://github.com/user-attachments/assets/fb4946ed-f055-4171-9542-48f1bef775e9)



- Operating voltage: From 4.8V to 7.4V. On the robot, the servo runs on 5V. 

- Turning radius: Can rotate up to 270°

- Torque: 13.5 kg-cm

- Speed: 0.13s/60º

- Weight: 2.05 ounces

- Gear material: Brass

- Power: The servo power is specified below. 

- Input pulse:    
Minimum-500 μs        
Center-1500μs       
Maximum-2500 μs

![Screenshot 2024-11-08 104017](https://github.com/user-attachments/assets/26bf1371-24b6-427f-be1d-9da5c48c0dc1)




# Sensors
Next, the specifications of the sensors that are in Luka will be shown.

## Ultrasounds
Three ultrasounds are used to define the distance between the robot and the walls of the track, specifically the side and front walls according to the direction in which Luka is heading.

![Screenshot 2024-11-08 104130](https://github.com/user-attachments/assets/1e2dcd67-23b4-4e43-9aa0-8c34c85a97e9)

- Connection pins:        
VCC            
Trig (Ultrasound Trigger)                 
Echo (Ultrasound reception)             
GND

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/9cfeae57-2def-47ad-9158-ded9577fc56a)


- Supply voltage: 5V

- Working frequency: 40 KHz

- Maximum detection range: 450cm

- Minimum detection range: 2cm

- Detection angle: 15 degrees

- Consumption current: 15mA



## giroscope
A BNO055 is used to measure the degrees of every turn and know when the robot should stop turning. The giroscope is used both to avoid the traffic signs and to take the turns. 

![BNO055](https://github.com/user-attachments/assets/33946a22-2ff8-4f12-b0c4-97331cfa95cb)

- Connection pins:    
Vin           
3V      
P50       
GND         
PS1          
SDA         
INT          
SCL  
ADR      
RST 

The team use the Vin input to power the sensor, the ground pin, and the SDA and SCL to stablish a communication between the arduino and the BNO055. 

Data Output:
The BNO055 can output the following sensor data:

- Absolute Orientation (Euler Vector, 100Hz): Three axis orientation data based on a 360° sphere

- Absolute Orientation (Quaterion, 100Hz): Four point quaternion output for more accurate data manipulation

- Angular Velocity Vector (100Hz): Three axis of 'rotation speed' in rad/s

- Acceleration Vector (100Hz): Three axis of acceleration (gravity + linear motion) in m/s^2

- Magnetic Field Strength Vector (20Hz): Three axis of magnetic field sensing in micro Tesla (uT)

- Linear Acceleration Vector (100Hz): Three axis of linear acceleration data (acceleration minus gravity) in m/s^2

- Gravity Vector (100Hz): Three axis of gravitational acceleration (minus any movement) in m/s^2

 

# Camera
Luka uses one camera to detect the color of the traffic signs. This is the pixy2. 

![pixy2.1](https://github.com/user-attachments/assets/46298b4d-2184-4b40-9b81-577219ed9214)

The pixy2 works at 60 fps, and is able to detect objects, lines and colors. On luka the main objetive of the camera is to detect colors (red and green). 
its connected to the arduino with an IDC 2 ICSP Arduino cable that goes into the arduino ICSP pins, wich provides all the connections needed to power and communicate with the pixy. 

# Controller boards
Luka uses a single controller boards: an Arduino Mega 2560. The Arduino, which is in charge of controlling the actuators, the sensors, and the entire movement of the robot.

## Arduino mega 2560

![Screenshot 2024-11-08 104239](https://github.com/user-attachments/assets/877f86c1-f333-4b46-bc66-869465ee6ebf)
  

- Power: 9V

- Pins used: 21

- Maximum current per pin: 40 mA

- Flash memory: 256 KB

- SRAM: 8KB

- Weight: 37 grams

- Consumption: 93 mA




# Robot power
In Luka there are two individual powering systems.

## 12V ciruit
This circuit use 3 batteries, each one contain 4v approximately. The 3 batteries are connected on series, so the voltage adds up. The H-bridge is the electrical component that recieve this energy, and use it to power two ultrasounds and the traction motor. 
To connect the batteries the team use two packs of two batteries each, but one of them is moded so it only uses one battery. 

![pack de baterias modeado 2](https://github.com/user-attachments/assets/c07fb25c-0ca6-4173-b0fa-797ddf2f16f2)
![2 packs de baterias 4V 4](https://github.com/user-attachments/assets/7a6248cc-fc05-4bf4-bfd4-aad78766bb06)


## 9V circuit
This circuit use 3 9V batteries connected on parallel, so the amperage adds up, keeping the same 9V. Its connected directly to the arduino board, wich power one ultrasound, the pixy cam and the servo motor. Each one of this components are energized by a 5V output pin of the arduino. 

![Primera foto 9 voltios 2](https://github.com/user-attachments/assets/79c1b298-762f-4a96-95a9-bb6aa8bb3e1f)
![segunda foto 9 voltios 2](https://github.com/user-attachments/assets/a10426e9-767d-496e-b5a6-bf88363a8a4a)

# Conexions diagram
The connection diagram is shown so that the entire circuit can be clearly seen.

![Diagrama de conexion luka nuevo](https://github.com/user-attachments/assets/6a02a72f-8d6e-445f-9afe-fa92380ca7a5)