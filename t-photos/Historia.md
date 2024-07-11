# Historia del equipo RED MACHINE

1. Temporada 2023
    - [Julio del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Julio-del-2023)
    - [Agosto del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Agosto-del-2023)
    - [Septiembre del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Septiembre-del-2023)
    - [Octubre del 2023](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Octubre-del-2023)
2. [Temporada 2024]
    - [Febrero del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Febrero-del-2024)
    - [Marzo del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Marzo-del-2024)
    - [Abril del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Abril-del-2024)
    - [Mayo del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Mayo-del-2024)
    - [Junio del 2024](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Junio-del-2024)
3. [Historia de Julian y Luka ]
    - [JULIAN 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#JULIAN-1.0)
    - [JULIAN 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#JULIAN-2.0)
    - [JULIAN 3.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#JULIAN-3.0)
    - [JULIAN 4.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#JULIAN-4.0)
    - [JULIAN 5.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#JULIAN-5.0)
    - [LUKA 1.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#LUKA-1.0)
    - [LUKA 2.0](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#LUKA-2.0)
    - [Anexos](https://github.com/RoboticaLLR/redmachine2024/blob/main/t-photos/Historia.md#Anexos)
## Temporada 2023

### Julio del 2023

Luego de participar en una competencia de robotica a nivel regional, el equipo decidió participar en la WRO, especificamente en Futuros Ingenieros; por lo que como primer paso, el equipo comenzó a estudiar y analizar las reglas de la competencia. 

![1ra julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/66f7c8f1-b10c-4261-86b3-32c87bcd3b81)

Los siguientes días se comenzó a estudiar lo que podría ser el primer modelo del chasis y se investigaron diversas maneras de solucionar lo que serían las primeras problemáticas que se presentaron, las cuales fueron cómo se diseñaría el sistema de dirección y qué motor se utilizaría para conseguir la velocidad y el torque necesario.

![2da julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/3c73dc50-b3c4-4f2d-a4ad-92f87ee21a87)

A continuación el equipo empezó a buscar motores que pudieran utilizarse, desarmando juguetes, impresoras, entre otros dispositivos a lo cual finalmente se consiguió el motor necesario al desarmar un carro de control remoto modelo: Dodge T-rex Ram de la marca Nikko, el cual proporcionó las piezas mecánicas necesarias para poder diseñar el sistema de dirección. 

![3rajulio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/dbdfbd4e-9594-40f0-b34e-6d0528d7b328) ![4julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/32158385-5185-4d74-b19a-fd5dca851590)

Posteriormente el equipo de trabajo procedió al ensamblaje de ambos sistemas, y de los diferentes dispositivos que necesitaría el robot en bases de acrílicos y se logro finalizar el primer prototipo de lo que sería el chasis, y poder proseguir con el área de programación. 

![5julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/5d1d2414-1c38-4973-b7b8-8c7c55b3b648)

Para la programación se utilizó un arduino mega 2560 como programador, un puente H doble como regulador de potencia y velocidad, y un sensor de ultrasonido para medir distancia. Consecutivamente el equipo de trabajo reanudó la búsqueda de diferentes soluciones para detectar los colores de los semáforos, decidiendo utilizar una cámara ESP32-cam con un lente OV2640, siendo la siguiente problemática cómo programar esta con arduino. 

![6julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/eb1e7891-75de-4a19-87ab-400c2de48bbc)

Se investigó qué fuente de poder se iba a utilizar para energizar el robot, debido a que luego de utilizar baterías de 9V, el equipo se dio cuenta de que estas no eran ideales para el robot debido a que se desgastan muy poco tiempo. Por consiguiente se terminó uniendo dos packs de baterías, los cuales tenían ocho baterías recargables de 1.2V en serie, las cuales finalmente sumaban un total de 9.6V. 

Debido al espacio necesitado, se diseñó un segundo prototipo en el cual se decidió agregar un segundo piso en el robot, ubicando el área de electrónica en éste, y las baterías, el sistema de tracción y el sistema de dirección en el primer piso. 

![7julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/aa52095a-ea01-412f-901e-da4eb791124c)

Sin aún poder solucionar la programación, se decidió utilizar un sensor RGB 34725 para que el robot detecte en qué dirección debe cruzar.  

![8julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e1047aac-374b-4cdb-8531-4b916cac0f36)

Se plantea estrategia: se decide cruzar con la detección de color de las líneas de la pista, utilizando asimismo dos ultrasonidos más, uno en cada lado del robot, para que así, una vez detecte una pared, este cruce para evitar un choque. Sin embargo, estos dos ultrasonidos no significaban una ayuda, sino más bien un problema, ya que, cuando estos detectaban, el robot perdía la trayectoria, por lo cual finalmente se decidió no utilizar estos dos sensores de ultrasonido.

![9julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/c96458f7-a354-4cbc-b139-bbab67d7a71c)

Antes de la competencia, el equipo encontró baterías recargables con un voltaje mayor (3.7 V), por lo cual se decidió eliminar uno de los dos packs de baterías, y modificar el restante para que trabaje con 3 baterías.

![10julio](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/cab0ff29-43a8-4808-9a1b-f93d4ca45027)

### Agosto del 2023

Después de participar en la primera competencia regional, comenzó la búsqueda de soluciones a los problemas presentados. Se decidió cambiar el sistema de dirección, creando uno nuevo con piezas obtenidas en un kit de robótica spike prime número 45678, ya que con este nuevo sistema de dirección se conseguiría tener un mayor radio de giro, así como se podría tener un giro más preciso. 

![1ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/2e470dc5-3636-41a1-9733-a62f20ae0db0)

Se plantearon nuevas estrategias, por las cuales se decidió que la manera idónea de cruzar sería con ayuda del ultrasonido y que el sensor TCS34725 solo detecte la primera línea para determinar si el robot debe cruzar en sentido horario o antihorario.

Siguiendo con la segunda parte del reto, el equipo comenzó a programar la cámara buscando cómo transferir la información de la cámara al Arduino sin necesidad de utilizar wifi. Luego de buscar en varias fuentes se encontró la solución, la cual fue transmitir la información a través de los puertos seriales.

Luego el motor utilizado por todo este tiempo comenzó a fallar muy seguido, impidiendo el avance del equipo de trabajo en el segundo reto, por lo que faltando poco días para la competencia el equipo sacó el motor y por lo tanto la caja de cambio de otro carro a control remoto para acoplarlo al robot.

![2ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/6dbc1ef9-7d96-4ca5-839e-63c8bb6c3e24)

Para proporcionar un mayor radio de giro se modificó el sistema de dirección usando piezas de un Kit Lego Spike Prime.

![3ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/528c8a5c-2b6b-4996-9143-c09bb9472b1b)

### Septiembre del 2023

Se realizaron prácticas en la pista, para el rendimiento del robot en el reto número uno y dos para hacer el mejor trabajo en el nacional del 2023.Se elaboró y se actualizó el informe conforme a lo que se había logrado hasta el momento, para luego realizar prácticas en la pista, para mejorar el rendimiento del robot en el reto número uno y dos de cara al nacional del 2023.

![4ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e132722b-7d13-4236-8e9b-7d837b6f065d) ![5 ago](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/eb82c5c2-2d85-4bf3-a0a5-0326dc07f3d5)

Llego el momento de la competencia nacional, en la que se logro el objetivo de clasificar al mundial de la WRO 2023 en Panamá.

![sep2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/41c23672-ecf9-4970-a691-882c736f0801)![sep1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/454f09af-68c2-41fe-842e-51191bca02c3)
 

### Octubre del 2023

Se continuó la programación de la cámara para el reto número 2. Cambio de ruedas del sistema de dirección para aumentar la seguridad y la estética y se inició la construcción del tercer prototipo del robot, que se basa en la restauración de los acrílicos, organización de los cables por medio de conectores para mejorar la parte estética del robot.

![sep3](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/38c0d5d6-7739-47c4-ac14-718439dbf9c6)

Llega el momento del mundial, en el cual el equipo quedo en el top 25 a nivel mundial, y top 2 entre los paises latinoamericanos.

![oc1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/d7f5104d-0fcb-45c1-b448-8e1b9b5449bd)![oct2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/93173685-2fc5-4110-bf5e-b1adf484abe1)

## Temporada 2024

### Febrero del 2024

Lo primero que el equipo hizo para comenzar esta temporada fue estudiar el nuevo manual de reglas, para encontrar las diferencias en el reto y pensar en posibles estrategias para el nuevo año. 

![febrero 1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/543ccce4-e258-4f4d-ab56-94f6a3207c77)

El equipo comenzó a diseñar el nuevo robot, tomando en cuenta todo lo aprendido en el mundial. Durante este diseño se tomaron en cuenta aspectos como fueron el tamaño, el peso, cuales componentes se usarían, la posición de estos y la distancia entre los sistemas de tracción y dirección.

![feb2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e518fc97-dbcd-4631-86c7-ceff1295411f)

El equipo siguió pensando en qué estrategia se debía usar. Con el objetivo de no mostrar los avances y las mejoras que se tendrían en el nuevo robot, se decidió que lo mejor sería volver a participar con Julián (robot del 2023) durante las regionales, y participar con el nuevo robot (Luka) en la nacional, que sería el mayor reto del momento. 

![feb3](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/c918252f-6495-4227-b0c1-6020686d0f09)

### Marzo del 2024

Durante este mes comenzó la construcción del robot que se usará en la nacional de 2024.  En la primera semana de marzo se cortaron las bases de acrílico, y se compraron los componentes faltantes para el robot.
Primero se instalaron el sistema de tracción y el sistema de dirección al robot. En este momento el sistema de dirección estaba construido en 3 piezas de acrílico.  Luego de esto se instalaron el arduino y la raspberry. 

![feb4](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/23bb3e40-7f24-499d-9f17-81d077cd7c80)![feb5](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/bf47b801-3b39-4c64-8e48-dd82d7b7f9e9)

A finales de marzo se terminó la construcción del robot, luego de instalar todos los sensores que usaría el robot. Asimismo se comenzó con la programación para el reto 1, y la programación de python para el reto 2. 

![feb6](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/ba34c027-6287-45b2-a1b7-981fea57a367)

### Abril del 2024

En vista de que el equipo decidió participar con Julián en las regionales, se comenzó a trabajar en algunas mejoras para el funcionamiento de este robot. Una de estas mejoras fue el cambio del sensor RGB 34725 al sensor de color TCS 3200.

![feb7](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/48b506e4-a226-4501-9297-ab61940ddbd8)

Con visión a la regional que se acercaba, se actualizó el informe conforme a lo que se había conseguido hasta el momento. Los más importante en cuanto a esto fue la actualización de la cronología, el diagrama de cableado y las especificaciones del sensor de color. 

![feb8](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/e74d6b44-9a5a-4ff3-aa44-223e3d5b8257)

Competencias regionales del 2024: 

Colegio Santo Tomás de Aquino 04-05-2024
![feb9](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/0569d301-fa0c-444f-8521-f688f98e4dcd)

### Mayo del 2024
Liceo Los Robles 18-05-2024
![feb10](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/da1b210c-ddeb-4e1a-85d9-211e8c0ffc5c)


### Junio del 2024

De cara al nacional, el equipo continuó con las pruebas de ambos retos, principalmente del segundo; al mismo tiempo, el equipo realizó el informe de Luka.
Durante las pruebas, se decidió quitar el sensor de color ya que no estaba funcionando de la mejor manera, y se empezó a utilizar los sensores de ultrasonido de los lados para saber el lado al cual Luka debia seguir.

![jun1](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/4ec63c83-89a8-4a1b-ab29-952e07b1f754)

El equipo logro terminar por completo el informe, y terminó de subir la informacion al github a finales del mes, estando ya preparados para el nacional de la WRO 2024.

![JUN2](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/ec3a2df2-7dff-4fec-b924-b2d1eb7ead83) ![JUN3](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/cd6712cd-9323-48ea-98b8-636553662499)



## Historia de Julian y Luka 

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

![Segundo Luka](https://github.com/RoboticaLLR/redmachine2024/assets/155327813/565f334d-1133-470b-ba16-1d1ea5e7b660)


## Fotos del equipo 

Foto del equipo

![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/d8850db3-f985-4b1b-991d-e098817d37a1)

Foto salvando a Julian
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/3ec721f8-8198-4fdd-9325-5fb393d7bb89)

 ## Anexos 

 Pruebas de la detección de los semáforos
 
 https://youtube.com/shorts/HLt_O2JlURQ?feature=share

 Pruebas de continuidad en Luka

 https://youtube.com/shorts/jUmZjaQ_be8?feature=share