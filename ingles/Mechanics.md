# Index
 -  [Motors](https://github.com/RoboticaLLR/redmachine2024/blob/main/ingles/Mechanics.md#Analysis-of-engines-operation)
 - [Sensors](https://github.com/RoboticaLLR/redmachine2024/blob/main/ingles/Mechanics.md#Sensors)
- [controller boards](https://github.com/RoboticaLLR/redmachine2024/blob/main/ingles/Mechanics.md#COntroller-boards)
- [Conexions diagram](https://github.com/RoboticaLLR/redmachine2024/blob/main/ingles/Mechanics.md#Conexions-diagram)

# Analysis of engines operation
In the following space, aspects of the operation of the 2 motors of our robot will be shown.

## Motor Core Hex 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6b746939-ccca-4912-8b1c-9ad4e71ff221)

- Pinout: The Core Hex motor uses a 2-pin JST-VH connector for motor power.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/c7aff880-7a15-44b1-b9e1-c6974a79448b)

- Weight: 7 ounces

- Installation: To use this motor in the way the equipment needs it, a 5mm hexagonal shaft is used, from which one end emerges from each side of the motor. Said shaft has a length of 11.8cm, and its structure is made of stainless steel. At each end of this axle, a traction wheel was placed, whose diameter is 90mm. Finally these wheels were secured to the axle with collars, which have a set screw that tightens towards the axle.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/dcbaaf83-3450-4a9e-aa4d-554377d16a59)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/df18828a-5f2d-4f70-848b-5a2f91a3fa78)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/051d6c34-a69f-4ef8-ae87-8be1aa2114cc)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/980cb8f4-5084-4b9c-bd1e-64fec1b01462)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/a078144d-4553-4803-a540-ab6f2e750554)

- Power: The motor is powered by three 4V batteries each. The connection between the batteries and the motor is established through an H bridge, in order to control the direction of movement and speed.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6080e0c3-c7f8-4286-953b-fc6ee15df7fa)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/8693bc6c-c8c6-4ca9-9f08-e4335cd6572e)

- Torque: 3.2 N-m

- Operating voltage: 12V

- Free speed: 125 RPM


## Smart Robot Servo

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e1ce0635-b6bf-495e-8aa1-2b14797dce59)

- Installation: A cut aluminum double servo arm was anchored to the Smart Robot Servo. Then a screw was placed in one of the entrances of the aluminum arm, which joined it with two pieces of Lego. A second screw joins the two Lego pieces mentioned above.  Likewise, two screws from the chassis were anchored in the third piece of Lego, so that it worked as a support. Finally the wheels were placed, which fit between the three Lego pieces.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/f14cee10-557f-4d49-bd69-229238cac2ac)

![WhatsApp Image 2024-06-27 at 16 12 18_2be56267](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/bc2aaa2e-3bf6-4cc9-9203-6ef733979276)

![WhatsApp Image 2024-06-27 at 16 12 14_21584d16](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6c6a6630-409f-4073-a032-47328d36d9dd)


- Operating voltage: From 4.8V to 7.4V. On the robot, the servo runs on 5V. 

- Turning radius: Can rotate up to 270°

- Torque: 13.5 kg-cm

- Speed: 0.13s/60º

- Weight: 2.05 ounces

- Gear material: Brass

- Power: Powered through a 5V pin of the arduino mega 2560

- Input pulse:    
Minimum-500 μs        
Center-1500μs       
Maximum-2500 μs

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6dc2f1be-d145-4671-ae34-989eca4c86c3)


# Sensors
Next, the specifications of the sensors that are in Luka will be shown.

## Ultrasounds
Three ultrasounds are used to define the distance between the robot and the walls of the track, specifically the side and front walls according to the direction in which Luka is heading.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/34f25025-08d4-4dc2-a30c-5421e7f24bae)

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


# Controller boards
Luka uses two controller boards: An Arduino Mega 2560 and a Raspberry Pi 5. The Raspberry is in charge of doing the entire process of detecting obstacles during the second challenge, and sending certain signals to the Arduino, which is in charge of controlling the actuators. , sensors, and in itself the entire movement of the robot.

## Arduino mega 2560

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/5d179d3d-033b-4f8a-9473-284054dd5a07)

- Power: 9V

- Pins used: 21

- Maximum current per pin: 40 mA

- Flash memory: 256 KB

- SRAM: 8KB

- Weight: 37 grams

- Consumption: 93 mA



## Raspberry pi 5

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/5bd1be88-3748-438e-b894-281b168c319f)

- Power: 5V

- CPU: Broadcom BCM2712. Quad-core Arm Cortex-A76 at 2.4 GHz

- GPU: VideoCore VII. Supports OpenGL ES 3.1 and Vulkan 1.2

- RAM: 8GB LPDDR4X

- CONNECTIVITY: Wi-Fi 5. Bluetooth 5.0 / BLE

- PORTS:            
2 x micro HDMI (up to 2 x 4K 60Hz simultaneous)            
2 x USB 3.0          
2 x USB 2.0                            
1 x Gigabit Ethernet with optional PoE                
2 x 4-track MIPI                 
1 x PCIe 2.0 x1                    
1 x GPIO 40 pin                 

- STORAGE: microSD slot. Option for M.2 SSD drives (via optional HAT)

# Conexions diagram
The connection diagram is shown so that the entire circuit can be clearly seen.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/4f70180c-dffa-4ec1-b92a-c73d23e61b9b)