# Software Design

1. Image analysis
    -  [Image Processing](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Image-Processing)
    -  [Image Filter](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Image-Obtention)
    - [Red and Green Masks creation](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Red-Green-Masks)
    -  [Gray image](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Gray-Image)
    -   [Color Detection](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Color-Detection)
    -  [Distance Processing](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Distance-Processing)
    - [Data send to Arduino](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Data-send-to-Arduino)
2. [Robot Movement]
    -   [Servo Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Servo-Determination)
    -  [Movemente through Pillars](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movement-around-Pillars)
        - [Lane Determination](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Lane-Movement)
    - [Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Orientation)
    -  [Movement through Orientation](https://github.com/RoboticaLLR/redmachine2024/blob/main/Code.md#Movement-through-Orientation)

# Image Processing

## Image Obtention

We use the OpenCV library to obtain images through a webcam. To do this we use the command `cv2.VideoCapture(0)` to obtain the raw image, and then convert it with `frame.read()`

## Image filter
We use the function `cv.cvtColor(frame, cv.COLOR_BGR2HSV)` to change to an HSV format, where it becomes much easier to detect red and green


![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/b23b6ee3-f1e1-4f56-aaf6-82057ce30cf3)

## Red Green Masks


We create an array with the help of numpy with the following command `np.array([0, 140, 20], np.uint8)` where we set the red and green HSV values ​​to 4 different values

## Gray Image

We create a mask using the commands `mask = cv2.inRange()` where using the commands `redDetected = cv2.bitwise_and()` and `redDetected = cv2.bitwise()` where we create a numpy array where we observe a gray image only allowing what is considered red and green to be superimposed on the mask
### Red Detection
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/98cb1671-d84c-46fd-a052-980c281f55c7)
### Green Detection
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/0739192a-de88-43f7-b07b-03a33113c629)
### Combination and coloration
![image](https://github.com/RoboticaLLR/redmachine2024/assets/139584566/106ef0f8-027b-4afb-b935-1fe8659725b6)




## Color Detection

Using the function `contours1, _ = cv2.findContours()` we can obtain the position and area of ​​the cones in the image, where in this way we filter them from red to green in order to obtain all the values ​​that are considered necessary

## Distance Processing

Once we have the values ​​of the cones, depending on their area we can define an approximate distance, which helps define the different movements to be established on the arduino.


## Data send to Arduino

The sending of data to the arduino is done completely digitally, where 4 cables are sent, which means "Green Detection", "Green Detection Near", "Red Detection", "Red Detection Near"

# Movement and coordination

## Servo Determination

The servo motor is set to pin 2 of the arduino, where it is configured using the `pro.attach(2)` command and can also be moved using the `pro.write()` command used throughout the code.

##  Movement around Pillars
Once it receives the information from the raspberry pi 5, it can move to the left or right depending on the cone it has detected.


### Lane Movement
As a main strategy we define two lanes, left (1) and right (2), which are responsible for making different movements if they detect a red, they are on the left or the right, and vice versa.

## Orientation
With the ultrasound sensors we detect where the walls are and when we reach a curve we define whether it is necessary to cross to the right or to the left, saving us problems with the lines of the floor.

## Movement through Orientation

Once we detect the direction and are aware of the lane we are in, we go back and make the respective movement to remain in the middle of the track, looking perpendicularly towards the walls.

