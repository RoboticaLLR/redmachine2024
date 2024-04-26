# Documentacion de Ingenieria/ Equipo Red Machine

Este repositorio contiene todos los materiales necesarios para fabricar «Julian» El robot autodirigido creado por el equipo «Red Machine», que participará en la categoría de Futuros Ingenieros en la WRO de Venezuela en la temporada de 2024.


![julian 2024](https://github.com/RoboticaLLR/redmachine2024/assets/146040533/85cb1149-404d-40af-82c5-be7ef2e1914a)

 
# Miembros del equipo Red Machine
-Samuel Jose Galban Franco

-Juan Diego Cano Barros

-Angel Saul Rodriguez Guerra

![red machine team pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/b7eeb760-babc-4338-b1a4-e9a426606d17)

   
# Introduccion
Nos hemos esforzado al máximo para hacer el mejor robot posible. Ha sido un camino muy largo y nos ha ayudado mucho aprender programación, mecánica y diseño. Después de mucho pensar y analizar hemos creado nuestra propia estrategia basada en los componentes electrónicos que teníamos, creyendo fervientemente que tendrá un buen rendimiento en esta edición de la WRO.

# Diseño Mecanico
El diseño del robot ha sido uno de los mayores problemas a los que nos hemos enfrentado en todas las fases de la competición. Las bases acrilicas que utilizamos en las competiciones anteriores no funcionaron, ya que tenian muchas imperfecciones, provocando que el sistema de traccion y direccion estuviera mal ubicado, asi como una distribucion de pesos realmente mala. A pesar de todo esto, ese chasis nos dio una idea de como diseñar uno nuevo, asi que despues de la competicion nacional del 2023, decidimos hacer un corte con laser a bases acrilicas nuevas. Después de esto, el chasis quedó realmente bien en todos los aspectos. 
Además, cambiamos las ruedas del robot por unas nuevas que se sujetaran mejor al sistema de dirección, lo que también proporcionó una mejor estética al robot.

![bases de acrilico pequeño](https://github.com/RoboticaLLR/RedMachine/assets/146040533/1ab2bf5b-492d-4d9f-b8cb-7154f9053f9f)

# Estrategia
En esta parte del proceso, empezamos a hacer del prototipo un robot propiamente dicho, conectando todos los componentes electrónicos y empezamos a codificar para completar el primer reto y empezar a ganar nuestros primeros 30 puntos. Los componentes que utilizamos para completar este reto fueron:

 Arduino Mega 2560: Una placa de desarrollo de código abierto construida con un microcontrolador y señales de entrada y salida, responsable de activar y desactivar determinados componentes.
 
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


El Arduino está alimentado por una pila de 9v, que se enciende mediante un interruptor, y es el encargado de alimentar y dar las respectivas señales al servomotor, para que sea capaz de realizar los cruces de forma efectiva con facilidad, además de energizar y recibir las señales. los sensores, como el ultrasonido que envía y recibe las señales para calcular el tiempo respectivo, y con ello, la distancia a un determinado o El Arduino está alimentado por una pila de 9v, que se enciende mediante un interruptor, y es el encargado de alimentar y dar las respectivas señales al servomotor, para que sea capaz de realizar los cruces de forma efectiva con facilidad, además de energizar y recibir las señales. los sensores, como el ultrasonido que esquiva obstáculos, también están conectados por serie al sensor de color, para recibir los valores exactos en RGBC

Por último, el puente H está conectado y alimentado por una batería de 3,7 v y se enciende con el mismo interruptor que enciende el Arduino.
El puente H recibe señales del Arduino por lo que recibe señales digitales y analógicas, dándole la capacidad de mover el motor en diferentes direcciones y velocidades. También es el encargado de alimentar la Esp32-cam a través del puerto de 5v.
