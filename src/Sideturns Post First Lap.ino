void giroscompleta(){
  proxicono();
 d=sensor_2.ping_cm();
if(d<40&&d!=0&&a==1&&proxcono==1&&vuelta!=3){//giro izquierda con rojo
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
    analogWrite(2,vel);
    pro.write(izquierda);
    girarizq290();
    pro.write(rec);
    delay(1300);
        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}

   d=sensor_2.ping_cm();
if(d<98&&d>70&&d!=0&&a==1&&proxcono==2){//giro izquierda con verde 

        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");

    analogWrite(2,vel);
    pro.write(izquierda);
    girarizq290();
    pro.write(rec);
    delay(500);
        contarconos();
    vuelta++;


    carril=1;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}
   d=sensor_2.ping_cm();
if(d<25&&d!=0&&a==1&&proxcono==1&&vuelta==3){//giro izquierda con rojo vuelta estacionMIENTO
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
      analogWrite(2,velrapida);
    delay(900);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2100);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(izquierda);
    girarizq90();
    digitalWrite(adelante,0);
    pro.write(rec);
    delay(400);
    digitalWrite(adelante,1);
    delay(1000);

        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}


// a=2

  proxicono();
   d=sensor_2.ping_cm();
if(d<100&&d!=0&&a==2&&proxcono==1&&vuelta!=3){//giro derecha con rojo
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
    analogWrite(2,vel);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    delay(500);
        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}

   d=sensor_2.ping_cm();
if(d<40&&d!=0&&a==2&&proxcono==2){//giro derecha con verde  carril de verde
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
    analogWrite(2,vel);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    delay(500);
        contarconos();
    vuelta++;


    carril=1;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}
   d=sensor_2.ping_cm();
if(d<25&&d!=0&&a==2&&proxcono==2&&vuelta==3){//giro derecha con rojo vuelta estacionMIENTO
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
      analogWrite(2,velrapida);
    delay(900);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2100);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(derecha);
    girarder90();
    digitalWrite(adelante,0);
    pro.write(rec);
    delay(400);
    digitalWrite(adelante,1);
    delay(1000);

        contarconos();
    vuelta++;


    carril=2;
    direccion--;
    hola=0;
    giro++;
if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
 proxicono();
}
}
