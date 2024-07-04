# Documentacion de Ingenieria/ Equipo Red Machine

Este repositorio contiene todos los materiales necesarios para fabricar «Luka» el robot autodirigido creado por el equipo «Red Machine», que participará en la categoría de Futuros Ingenieros en la WRO de Venezuela en la temporada de 2024.


![luka2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/100c6890-de82-4203-baa2-43cbf61999da)

# Contenidos

 -  [Miembros del equipo Red Machine](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Miembros-del-equipo-Red-Machine)
 -  [Introduccion](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Introduccion)
 -  [Diseño Mecanico](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Diseño-Mecanico)
  -  [Diseño de Software](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Diseño-de-Software)
-  [Indice Mecanica](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Indice-Mecanica)
-  [Historial de equipo](https://github.com/RoboticaLLR/redmachine2024/blob/main/README.md#Historial-del-equipo)

# Miembros del equipo Red Machine
-Samuel Jose Galban Franco

-Juan Diego Cano Barros

-Angel Saul Rodriguez Guerra

![red machine 2024](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/d5bb5fc0-b1bd-47a8-9ac3-c190587ae5ae)

   
# Introduccion
Nos hemos esforzado al máximo para hacer el mejor robot posible. Ha sido un camino muy largo y nos ha ayudado mucho aprender programación, mecánica y diseño. Después de mucho pensar y analizar hemos creado nuestra propia estrategia basada en los componentes electrónicos que teníamos, creyendo fervientemente que tendrá un buen rendimiento en esta edición de la WRO.

# Diseño Mecanico
Durante la temporada de 2023, el diseño del robot siempre fue uno de los mayores problemas a los que el equipo se enfrentó, esto durante todas las fases de la competición. Las bases de acrilico que se utilizaron en las primeras competencias no funcionaron, ya que tenian muchas imperfecciones, provocando que el sistema de tracción y dirección estuviera mal ubicado, asi como una distribución realmente mala. A pesar de todo esto, ese chasis nos dió una idea de como diseñar uno nuevo, así que después de la competencia nacional, se usaron nuevas bases de acrílico, esta vez cortadas con láser. Después de esto, el chasis quedó realmente bien en todos los aspectos. 

![bases de acrilico pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1ab2bf5b-492d-4d9f-b8cb-7154f9053f9f)

Además, se cambiaron las ruedas del robot por unas nuevas que se sujetaran mejor al sistema de dirección, lo que también proporcionó una mejor estética al robot.

Luego de participar en el mundial de Panamá, el equipo decidió hacer cambios importantes a la hora de crear el nuevo prototipo. 
Entre estos cambios resalta el acercamiento entre las ruedas del sistema de tracción y dirección, con el objetivo de que el radio de giro se mayor, permitiendo hacer giros mas cerrados. Esto ayuda principalmente al desarrollo del desafío de obstáculos, debido a la dificultad del reto, y a la estrategia que el equipo desea usar. 

![luka de lado 2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/2f49965b-2c4d-478c-abf1-3842ebd0ab83)      ![julian de lado 2024 2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/c3f7801c-d940-4992-b78f-98beb0f70ac8)  


Asimismo, el tamaño del robot se redujo por aproximadamente 5 centímetros, ayudando a que el robot sea mas libre por la pista de juego, y facilitando el cumplimiento de los retos. Para lograr esto se rediseñaron los acrílicos, teniendo los nuevos una estructura completamente distinta al anterior. 
![acrilicos luka pequeño1](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/93bda588-5d18-4f1c-8973-c6c9f80af70f)

Otro cambio muy importante fue rediseñar el sistema de dirección, el cual fue nuevamente construido con piezas de lego, provenientes del kit de robótica spike prime número 45678. 3 de estas piezas fueron unidas con un par de ruedas para finalizar su construcción. 

![sistema direccion2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/9d33071c-ba41-47bc-8b42-ef2623d5b0dd)


De misma manera se hizo un diseno 3D, donde podiamos ver ya analizar de forma eficiente todo lo relativo hacia el robot.
### derecha
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/0364d856-0c1f-4acb-b7b7-736befe48c29)
### adelante
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/2e0cb5f8-766f-4ef3-ac54-ce97839b3b43)
### derecha
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/60cefae2-e63a-47f8-9d52-f64e386c134e)
### atras
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/de874051-7a95-4c22-b036-3004a4ecf061)
### arriba
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/825a1b6c-bec4-4b58-83b7-381921703ff1)
### abajo
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/ad9235b4-6f95-4a00-a3c7-1abaec18f783)





# Diseno de Software

1. Analisis de imagen
    -  [Obtencion de imagen](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Obtencion-de-imagen)
    -  [Filtro de imagen (RGB a HSV)](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Filtro-de-imagen)
    - [Creacion de las mascaras Rojas y Verdes](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Creacion-de-las-mascaras-Rojas-y-Verdes)
    -  [Imagen gris con detalles rojos y verdes](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Imagen-gris-con-detalles-rojos-y-verdes)
    -   [Deteccion de color](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Deteccion-de-color)
    -  [Procesamiento de lugar y distancia de los conos](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Procesamiento-de-distancia)
    - [Envio de data al Arduino Mega 2560](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Envio-de-data-al-Arduino)
2. [Movimiento del Robot]
    -   [Inicio del ServoMotor y el motor](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Establecimiento-del-Servo-Motor)
    -  [Movimiento en funcion a los conos](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movimiento-en-funcion-a-los-conos)
        - [determinacion del carril 1 o 2](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Determinacion-del-carril-1-o-2)
    - [Deteccion de la orientacion](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Deteccion)
    -  [Movimiento en funcion a la orientacion](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movimiento-en-funcion-a-la-orientacion)
    # Diseno de Software

1. Analisis de imagen
    -  [Obtencion de imagen](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Obtencion-de-imagen)
    -  [Filtro de imagen (RGB a HSV)](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Filtro-de-imagen)
    - [Creacion de las mascaras Rojas y Verdes](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Creacion-de-las-mascaras-Rojas-y-Verdes)
    -  [Imagen gris con detalles rojos y verdes](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Imagen-gris-con-detalles-rojos-y-verdes)
    -   [Deteccion de color](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Deteccion-de-color)
    -  [Procesamiento de lugar y distancia de los conos](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Procesamiento-de-distancia)
    - [Envio de data al Arduino Mega 2560](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Envio-de-data-al-Arduino)
2. [Movimiento del Robot]
    -   [Inicio del ServoMotor y el motor](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Establecimiento-del-Servo-Motor)
    -  [Movimiento en funcion a los conos](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movimiento-en-funcion-a-los-conos)
        - [determinacion del carril 1 o 2](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Determinacion-del-carril-1-o-2)
    - [Deteccion de la orientacion](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Deteccion)
    -  [Movimiento en funcion a la orientacion](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movimiento-en-funcion-a-la-orientacion)

# Analisis de imagen

## Obtencion de Imagen

Hacemos uso de la libreria OpenCV para obtener imagenes mediante una webcam. Para ello usamos el comando `cv2.VideoCapture(0)` para obtener la imagen cruda, para luego convertirla con `frame.read()`

## Filtro de imagen

Utilizamos la funcion `cv.cvtColor(frame, cv.COLOR_BGR2HSV)` para cambiar a un formato HSV, donde se hace mucho mas facil detectar rojo y verde

![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/b23b6ee3-f1e1-4f56-aaf6-82057ce30cf3)

## Creacion de las mascaras Rojas y Verdes

Creamos un array con ayuda de numpy con el siguiente comando `np.array([0, 140, 20], np.uint8)` donde establecemos los valores de HSV de rojo y verde en 4 valores distintos

## Imagen gris con detalles rojos y verdes

Creamos una mascara usando los comandos `mask = cv2.inRange()` donde haciendo uso de los comandos de `redDetected = cv2.bitwise_and()` y de `redDetected = cv2.bitwise()` donde creamos un array de numpy donde observamos una imagen gris solamente permitiendo sobreponerse a la mascara lo que se encuentra dentro de lo considerado rojo y verde
### Deteccion de rojo
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/98cb1671-d84c-46fd-a052-980c281f55c7)
### Deteccion de verde
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/0739192a-de88-43f7-b07b-03a33113c629)
### COmbinacion y coloracion
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/106ef0f8-027b-4afb-b935-1fe8659725b6)



## Deteccion de color

Utilizando al funcion de `contours1, _ = cv2.findContours()` podemos obtener la posicion y area de los conos en la imagen, donde de esta manera los filtramos de rojo a verde para asi obtener todos los valores que se estiman necesarios

## Procesamiento de distancia

Una vez tenemos los valores de los conos, en funcion a su area podemos definir una distancia aproximado, que ayuda a definir los distintos movimiento a establecer en el arduino

## Envio de data al Arduino

El envio de datos al arduino se realiza de forma completamente digital, donde se envian 4 cables, los cuales siginifica "Deteccion Verde","Deteccion Verde cerca", "Deteccion Rojo", "Deteccion Rojo cerca"

# Movimiento y Coordinacion

## Establecimiento del Servo Motor

El servo motor se establece en el pin 2 del arduino, donde se configura usando el comando `pro.attach(2)` de  igual manera se puede mover usando el comando `pro.write()` usado durante todo el codigo

##  Movimiento en funcion a los conos
Una vez recibe la informacion de la raspberry pi 5, este puede moverse hacia la izquierda o hacia la derecha en funcion al cono que haya detectado

### Determinacion del carril 1 o 2
Como estrategia principal definimos dos carriles siendo izquierda (1) y derecha (2) los cuales se encargan de hacer movimientos diferentes si detectan un rojo estan en la izquierda o en la derecha, y viceversa.

## Deteccion de orientacion
Con los sensores de ultrasonido detectamos donde estan las paredes y al llegar a una curva definimos si es necesario cruzar hacia la derecha o hacia la izquierda, ahorrandonos problemas con las lineas del suelo

## Movimiento en funcion a la orientacion

Una vez detectamos la direccion y tenemos conocimiento del carril en el que estamos, retrocedemos y hacemos el movimiento respectivo para quedar en el medio de la pista, mirando de forma perpendicular hacia las paredes.

## Diagramas de flujo

-  [Diagrama reto 1](https://github.com/RoboticaLLR/redmachine2024/blob/main/other)
-  [Diagrama reto 2](https://github.com/RoboticaLLR/redmachine2024/blob/main/other)
-  [Diagrama Raspberry pi 5](https://github.com/RoboticaLLR/redmachine2024/blob/main/other)

## Subcodigo

```
//Deteccion de conos (Raspberry pi 5)
Poner filtrar a la imagen
Distinguir entre rojo y verde
Definir su distancia
Enviar informacion al arduino
//Movimiento del Robot
Determinacion del carril
Identificacion de conos
Lectura de paredes
Giros de paredes
```

> [!IMPORTANT]
> Cada iteracion dura aproximadamente 20 ms.


## Componentes electronicos
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

![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/c73c5e73-b411-4b85-9173-076263746ec6)
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/abdfc817-331a-4c2d-a5a1-0446ebbb90a9)
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/39175e9a-2e7a-4ada-82d1-380bb48b7ed2)



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

# Indice Mecanica

Para mas informacion sobre la mecanica creamos un documento donde puedes consultar las especificaciones de las piezas y de los mecanismos del robot

 -  [Motores](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Analisis-del-funcionamiento-de-los-motores)
 - [Sensores](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Sensores)
- [Tarjetas controladoras](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Tarjetas-controladoras)
- [Diagrama de Conexiones](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Diagrama-de-conexiones)

# Videos 
[![Alt text](https://img.youtube.com/vi/HS7eLoFSOkU/0.jpg)](https://www.youtube.com/watch?v=HS7eLoFSOkU)

 -  [Video reto 1 (TODAS LAS POSIBILIDADES)](https://www.youtube.com/watch?v=HS7eLoFSOkU)


 -  [Video reto 2](https://www.youtube.com/watch?v=HS7eLoFSOkU)

# Historial del equipo


1. Temporada 2023
    - [Julio del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Julio-del-2023)
    - [Agosto del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Agosto-del-2023)
    - [Septiembre del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Septiembre-del-2023)
    - [Octubre del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Octubre-del-2023)
2. [Temporada 2024]
    - [Febrero del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Febrero-del-2024)
    - [Marzo del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Marzo-del-2024)
    - [Abril del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Abril-del-2024)
    - [Mayo del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Mayo-del-2024)
    - [Junio del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#Junio-del-2024)
3. [Historia de Julian y Luka ]
    - [JULIAN 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#JULIAN-1.0)
    - [JULIAN 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#JULIAN-2.0)
    - [JULIAN 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#JULIAN-3.0)
    - [JULIAN 4.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#JULIAN-4.0)
    - [JULIAN 5.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#JULIAN-5.0)
    - [LUKA 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#LUKA-1.0)
    - [LUKA 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/Historia.md#LUKA-2.0)
