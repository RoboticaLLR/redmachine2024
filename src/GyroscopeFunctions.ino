
void girarder90(){
    //subir es mas derecha bajar mas izquierda
  int error=5;
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  angulof=angulof+90;
   Serial.println(angulof); 

  if(angulof>360){
  angulof-=360;
   Serial.println(angulof); 

}
 x = orientationData.orientation.x+sumang;
  while(x>angulof+error+5||x<angulof+error){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
   Serial.println(angulof); 
 Serial.println("listoc reack"); 

}


void girarizq90(){
    //subir es mas derecha bajar mas izquierda
  int error=29;
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
angulof=angulof-90;
   Serial.println("ANGULO ESPERADO");
 Serial.println(angulof); 

if(angulof<0){
  angulof= angulof+360;
   Serial.println("ANGULO ESPERADO"); 
   Serial.println(angulof); 
   delay(1000);

}                    //cambiaestevalor        positivo+izquierda       negativo+derecha
  while(x>angulof+error||x<angulof-20){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
  Serial.println(angulof); 
 Serial.println("listoc reack");


}



void iraizq(){
  //subir es mas derecha bajar mas izquierda
    int error=43;
      sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
 Serial.println(angulof); 

if(angulof<0){
  angulof= angulof+360;
   Serial.println(angulof); 

}    //       ESTE
  while(x>angulof+error||x<angulof-20){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
  Serial.println(angulof); 
 Serial.println("listoc reack"); 

}




void irader(){
    //subir es mas derecha bajar mas izquierdas
    int error=15;
      sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);

   Serial.println(angulof); 

  if(angulof>360){
  angulof-=360;
   Serial.println(angulof); 

}
 x = orientationData.orientation.x+sumang;

                           // ESTE
  while(x>angulof+20||x<angulof+error){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
   Serial.println(angulof); 
 Serial.println("listoc reack"); 

}

void girarizq290(){
    //subir es mas derecha bajar mas izquierda
  int error=38;
    sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
 x = orientationData.orientation.x+sumang;
angulof=angulof-90;
   Serial.println("ANGULO ESPERADO");
 Serial.println(angulof); 

if(angulof<0){
  angulof= angulof+360;
   Serial.println("ANGULO ESPERADO"); 
   Serial.println(angulof); 
   delay(1000);

}                    //cambiaestevalor        positivo+izquierda       negativo+derecha
  while(x>angulof+error||x<angulof-20){
        sensors_event_t orientationData;
  bno.getEvent(&orientationData, Adafruit_BNO055::VECTOR_EULER);
  
    x = orientationData.orientation.x+sumang;
Serial.println(x);
  }
  Serial.println(angulof); 
 Serial.println("listoc reack");


}