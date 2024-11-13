// In this code all the code of the pixycam will be explained 

#include <Pixy2.h> // This library allows to take the information the pixy sends

Pixy2 pixy;  //global instance of Pixy

int hola = 0; // Hola is used to saves the value of the signature. 


void setup(){
  Serial.begin(115200); // The serial monitor is iniacialized 
}


void loop(){
    pixy.ccc.getBlocks(); // This function returns the number of objects Pixy has detected. 
  if (pixy.ccc.numBlocks>0) // If an object is detected
  {
    for (i=0; i<pixy.ccc.numBlocks; i++) 
    {
      hola = pixy.ccc.blocks[i].m_signature; // Hola takes the value of The signature number of the detected object 
    }
  }

// After this, the "Hola" value is used on if conditionals, Like in the next example: 
if(Hola%2==1){
  Serial.print("Red")
}
// In the example, when red is detected, the word "red" is printed on the serial monitor. 
}
