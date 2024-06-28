# Documentacion de Ingenieria/ Equipo Red Machine

Este repositorio contiene todos los materiales necesarios para fabricar «Luka» el robot autodirigido creado por el equipo «Red Machine», que participará en la categoría de Futuros Ingenieros en la WRO de Venezuela en la temporada de 2024.


![luka2](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/100c6890-de82-4203-baa2-43cbf61999da)

# Contenidos

Jump to Miembros-del-equipo-Red-Machine

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
![arduino mega 2560 pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1b59a507-53a0-48d4-b9d8-0b8b94bf1d2d)


H-bridge: Es un tipo de circuito eléctrico que permite cambiar la polaridad de un motor de corriente continua, hacia delante y hacia atrás. El modelo de Puente H utilizado es el L298N que nos permite cambiar la velocidad en función de la tensión enviada por el Arduino.

![puente H pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/264757f2-118f-42c9-9dd8-2a3c91455834)

Ultrasonic sensor:Se trata de un sensor que utiliza sonidos ultrasónicos para detectar el tiempo de rebote del sonido de un lado a otro. Utilizando el Arduino Mega 2560 podemos determinar la distancia en base al tiempo que tarda la onda en volver, realizando la función de determinar cuando hay una pared cerca, y así realizar el giro correspondiente.

![ultrasonido pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/e8f17278-35e8-451b-9eb3-8465666ceec9)

TCS3200 color sensor:Es un sensor encargado de detectar colores en formato R G B C, siendo estos Rojo (R) Verde (G) Azul (B) Claro (C) donde permite calcular la intensidad de los colores y así transmitirlos al Arduino Mega en un número de 0 a 25 para asociarlos con los colores correspondientes, permitiendo determinar los colores presentes en la cancha, para decidir hacia que lado girar.

![tcs 3200 pequeño](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/d7da1967-9bac-4a97-92d8-da8f17152f6b)

Rev Robotics servo motor: Un motor eléctrico con un sensor de realimentación de posición integrado, que permite realizar movimientos angulares perfectos, utilizando una señal que va de 0V a 5V, donde cada valor que pueda tener la tensión representa un ángulo exacto, cumpliendo con excelencia la función de realizar los giros

![servo pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/57aaa91d-b5e5-4360-aef2-06025d15f8b0)

Electric motor:un dispositivo que convierte la energía eléctrica en movimiento mecánico, permitiendo en este caso mover una caja de cambios y movilizar las ruedas. La velocidad y el par que tiene vienen determinados por la tensión enviada por el puente en H, siendo moderada por el Arduino.

![motor pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/a74aacac-0276-49b0-abc1-485906c2a775)


El Arduino está alimentado por una batería de 9v, que se enciende mediante un interruptor, y es el encargado de alimentar y dar las respectivas señales al servomotor, para que sea capaz de realizar los cruces de forma efectiva con facilidad, además de energizar y recibir las señales. los sensores, como el ultrasonido que envía y recibe las señales para calcular el tiempo respectivo, y con ello, la distancia a un determinado o El Arduino está alimentado por una pila de 9v, que se enciende mediante un interruptor, y es el encargado de alimentar y dar las respectivas señales al servomotor, para que sea capaz de realizar los cruces de forma efectiva con facilidad, además de energizar y recibir las señales. los sensores, como el ultrasonido que esquiva obstáculos, también están conectados por serie al sensor de color, para recibir los valores exactos en RGBC

Por último, el puente H está conectado y alimentado por una batería de 3,7 v y se enciende con el mismo interruptor que enciende el Arduino.
El puente H recibe señales del Arduino por lo que recibe señales digitales y analógicas, dándole la capacidad de mover el motor en diferentes direcciones y velocidades. También es el encargado de alimentar la Esp32-cam a través del puerto de 5v.

# Indice Mecanica

Para mas informacion sobre la mecanica creamos un documento donde puedes consultar las especificaciones de las piezas y de los mecanismos del robot

 -  [Motores](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Analisis-del-funcionamiento-de-los-motores)
 - [Sensores](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Sensores)
- [Tarjetas controladoras](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Tarjetas-controladoras)
- [Diagrama de Conexiones](https://github.com/RoboticaLLR/redmachine2024/blob/main/Mecanica.md#Diagrama-de-conexiones)

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
