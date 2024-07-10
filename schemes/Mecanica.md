# Indice
 -  [Motores](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Analisis-del-funcionamiento-de-los-motores)
 - [Sensores](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Sensores)
- [Tarjetas controladoras](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Tarjetas-controladoras)
- [Diagrama de Conexiones](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Diagrama-de-conexiones)

# Analisis del funcionamiento de los motores 
En el siguiente espacio se mostraran aspectos del funcionamiento de los 2 motores de nuestro robot.

## Motor Core Hex 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6b746939-ccca-4912-8b1c-9ad4e71ff221)

- Configuración de pines: El motor Core Hex utiliza un conector JST-VH de 2 pines para la alimentación del motor.

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/c7aff880-7a15-44b1-b9e1-c6974a79448b)

- Peso: 7 onzas

- Instalación: Para utilizar este motor de la forma en que el equipo lo necesita, se utiliza un eje hexagonal de 5mm, del cual sale un extremo por cada lado del motor. Dicho eje tiene una longitud de 11.8cm, y su estructura es de acero inoxidable. A cada extremo de este eje se le colocó una rueda de tracción, cuyo diametro es de 90mm. Finalmente estas ruedas se aseguraron en el eje con unos collares, los cuales tienen un tornillo de fijación que se aprieta hacia el eje. 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/dcbaaf83-3450-4a9e-aa4d-554377d16a59)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/df18828a-5f2d-4f70-848b-5a2f91a3fa78)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/051d6c34-a69f-4ef8-ae87-8be1aa2114cc)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/980cb8f4-5084-4b9c-bd1e-64fec1b01462)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/a078144d-4553-4803-a540-ab6f2e750554)

- Alimentación: El motor se alimenta con tres baterías de 4V cada una. La conexión entre las baterías y el motor es establecida a través de un puente H, para así poder controlar el sentido del movimiento y la velocidad. 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6080e0c3-c7f8-4286-953b-fc6ee15df7fa)

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/8693bc6c-c8c6-4ca9-9f08-e4335cd6572e)

- Torque: 3.2 N-m

- Voltaje de funcionamiento: 12V

- Velocidad libre: 125 RPM


## Smart Robot Servo

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e1ce0635-b6bf-495e-8aa1-2b14797dce59)

- Instalación: Se le ancló un Brazo servo doble de aluminio cortado a el Smart Robot Servo. Luego se colocó un tornillo en una de las entradas del brazo de aluminio, el cual lo unió con dos piezas de lego. Un segundo tornillo une las dos piezas de lego mencionadas anteriormente.  Asimismo, dos tornillos provenientes del chasis se anclaron en la tercera pieza de lego, para que esta funcionara como soporte. Finalmente se colocaron las ruedas, las cuales encajan entre las tres piezas de lego. 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/f14cee10-557f-4d49-bd69-229238cac2ac)

![WhatsApp Image 2024-06-27 at 16 12 18_2be56267](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/bc2aaa2e-3bf6-4cc9-9203-6ef733979276)

![WhatsApp Image 2024-06-27 at 16 12 14_21584d16](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6c6a6630-409f-4073-a032-47328d36d9dd)


- Voltaje de funcionamiento: De 4.8V a 7.4V. En el robot, el servo funciona con 5V. 

- Radio de giro: Puede girar hasta 270°

- Torque: 13.5 kg-cm

- Velocidad: 0.13s/60º

- Peso: 2,05 onzas

- Material del engranaje: Latón

- Alimentación: Se alimenta a través de un pin de 5V del arduino mega 2560

- Pulso de entrada:    
Mínimo-500 μs        
Centro-1500μs       
Máximo-2500 μs

![image](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6dc2f1be-d145-4671-ae34-989eca4c86c3)


# Sensores
A continuacion, se mostraran las especificaciones de los sensores que estan en Luka. 

## Ultrasonidos
Se usan tres ultrasonidos para definir la distancia existente entre el robot y las paredes de la pista, especificamente las paredes laterales y la frontal de acuerdo a la direccion en la que se dirige Luka. 

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/34f25025-08d4-4dc2-a30c-5421e7f24bae)

- Pines de conexion:        
VCC            
Trig (Disparo del ultrasonido)                 
Echo (Recepción del ultrasonido)             
GND

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/9cfeae57-2def-47ad-9158-ded9577fc56a)


- Voltaje de alimentacion: 5V

- Frecuencia de trabajo: 40 KHz

- Rango máximo de deteccion: 450cm

- Rango mínimo de deteccion: 2cm

- Ángulo de detección: 15 grados

- Corriente de consumo: 15mA


# Tarjetas controladores
Luka usa dos tajetas controladores: Un arduino mega 2560 y una raspberry pi 5. La raspberry se encarga de hacer todo el proceso de deteccion de los obstaculos durante el segundo reto, y enviar ciertas señales al arduino, el cual se encarga de controlar los actuadores, sensores, y de por si todo el movimiento del robot. 

## Arduino mega 2560

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/5d179d3d-033b-4f8a-9473-284054dd5a07)

- Alimentacion: 9V

- Pines utilizados: 21

- Corriente máxima por pin: 40 mA

- Memoria flash: 256 KB

- SRAM: 8 KB

- Peso: 37 gramos

- Consumo: 93 mA



## Raspberry pi 5

![image](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/5bd1be88-3748-438e-b894-281b168c319f)

- Alimentacion: 5V

- CPU: Broadcom BCM2712. Quad-core Arm Cortex-A76 a 2,4 GHz

- GPU: VideoCore VII. Soporta OpenGL ES 3.1 y Vulkan 1.2

- RAM: 8 GB LPDDR4X

- CONECTIVIDAD: Wi-Fi 5. Bluetooth 5.0 / BLE

- PUERTOS:            
2 x micro HDMI (hasta 2 x 4K 60Hz simultáneas)            
2 x USB 3.0          
2 x USB 2.0                            
1 x Gigabit Ethernet con PoE opcional                
2 x MIPI de 4 pistas                 
1 x PCIe 2.0 x1                    
1 x GPIO 40 pines                 

- ALMACENAMIENTO: Ranura microSD. Opción para unidades SSD M.2 (vía HAT opcional)

# Diagrama de conexiones
Se muestra el diagrama de conexiones para que se aprecie de forma explicita todo el circuito

![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/4f70180c-dffa-4ec1-b92a-c73d23e61b9b)