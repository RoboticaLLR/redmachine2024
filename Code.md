# Diseno de Software

1. Analisis de imagen
    i.   [Obtencion de imagen](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Obtencion-de-imagen)
    ii.  [Filtro de imagen (RGB a HSV)](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Filtro-de-imagen)
    iii. [Creacion de las mascaras Rojas y Verdes](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Creacion-de-las-mascaras-Rojas-y-Verdes)
    iv.  [Imagen gris con detalles rojos y verdes](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Imagen-gris-con-detalles-rojos-y-verdes)
    v.   [Deteccion de color](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Deteccion-de-color)
    vi.  [Procesamiento de lugar y distancia de los conos](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Procesamiento-de-distancia)
    vii. [Envio de data al Arduino Mega 2560](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Envio-de-data-al-Arduino)
2. [Movimiento del Robot]
    i.   [Inicio del ServoMotor y el motor](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Establecimiento-del-Servo-Motor)
    ii.  [Movimiento en funcion a los conos](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movimiento-en-funcion-a-los-conos)
        ii.1 [determinacion del carril 1 o 2](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Determinacion-del-carril-1-o-2)
    iii. [Deteccion de la orientacion](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Deteccion)
    iv.  [Movimiento en funcion a la orientacion](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movimiento-en-funcion-a-la-orientacion)

# Analisis de imagen

## Obtencion de Imagen

Hacemos uso de la libreria OpenCV para obtener imagenes mediante una webcam. Para ello usamos el comando `cv2.VideoCapture(0)` para obtener la imagen cruda, para luego convertirla con `frame.read()`

## Filtro de imagen

Utilizamos la funcion `cv.cvtColor(frame, cv.COLOR_BGR2HSV)` para cambiar a un formato HSV, donde se hace mucho mas facil detectar rojo y verde

## Creacion de las mascaras Rojas y Verdes

Creamos un array con ayuda de numpy con el siguiente comando `np.array([0, 140, 20], np.uint8)` donde establecemos los valores de HSV de rojo y verde en 4 valores distintos

## Imagen gris con detalles rojos y verdes

Creamos una mascara usando los comandos `mask = cv2.inRange()` donde haciendo uso de los comandos de `redDetected = cv2.bitwise_and()` y de `redDetected = cv2.bitwise()` donde creamos un array de numpy donde observamos una imagen gris solamente permitiendo sobreponerse a la mascara lo que se encuentra dentro de lo considerado rojo y verde

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
