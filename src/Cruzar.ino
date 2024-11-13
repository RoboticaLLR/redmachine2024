


void cruzar(){

  //CRUZAR
 //carril adentro
 if(vueltacompleta!=1){
   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
  if((carril==3&&d<15&&d!=0&&a==1)||(carril==1&&d<15&&d!=0&&a==1)){    //IZQUIERDA verde
  
    Serial.println("IZQUIERDA CARRIL 3 O 1");
    analogWrite(2,velrapida);
    delay(1000);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    delay(100);
    digitalWrite(atras,1);
    girarizq90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    analogWrite(2,255);

        digitalWrite(atras,1);
         analogWrite(2,velrapida);
         delay(2500);
    
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
    delay(600);
    contarconos();
    vuelta++;

    carril=0;
    direccion++;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>4&&vuelta!=0){
vuelta= vuelta-4;
}
  }

  
//carril afuera
   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
  if((carril==3&&d<15&&d!=0&&a==2)||(carril==1&&d<15&&d!=0&&a==2)){   //DERECHA verde
        Serial.println("DERECHA CARRIL 1 O 3 VERDE");
      analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2700);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(derecha);
    girarder90();
    pro.write(rec);
    digitalWrite(adelante,0);
    delay(400);
    digitalWrite(atras,1);
     analogWrite(2,255);
     delay(1800);
    analogWrite(2,vel);
    digitalWrite(atras,0);
    delay(200);
    digitalWrite(adelante,1);
    delay(600);
        contarconos();
    vuelta++;


    carril=0;
    direccion++;
    hola=0;
    giro++;

    if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}
   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
  
//carril afuera
   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
  if((carril==2&&d<20&&d!=0&&a==1)||(carril==4&&d<20&&d!=0&&a==1)){    //izquierda rojo
        Serial.println("IZQUIERDA CARRIL 2 O 4 ROJO");
      analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(800);
    digitalWrite(atras,1);
    delay(2050);
    digitalWrite(adelante,1);
    delay(800);
    digitalWrite(atras,0);
    pro.write(izquierda);
    girarizq90();
    pro.write(rec);
    digitalWrite(adelante,0);
    delay(400);
    digitalWrite(atras,1);
    analogWrite(2,255);
    delay(1500);
    analogWrite(2,vel);
    digitalWrite(atras,0);
    delay(200);
    digitalWrite(adelante,1);  
    delay(600);
    delay(600);  
        contarconos();
    vuelta++;


    carril=0;
    direccion--;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }


   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
//carril adentro
  if((carril==4&&d<15&&d!=0&&a==2)||(carril==2&&d<15&&d!=0&&a==2)){     //derecha rojo
        Serial.println("DERECHACARRIL 2O 4");
      analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(600);
    pro.write(rec+20);
    digitalWrite(atras,1);
    girarder90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(500);
    analogWrite(2,255);
    digitalWrite(adelante,0);
    delay(1500);
    analogWrite(2,velrapida);
    delay(500);
    analogWrite(2,vel);
    digitalWrite(atras,0);
    digitalWrite(adelante,1);
    delay(600);
        contarconos();
    vuelta++;


    carril=0;
    direccion--;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }


   d=sensor_2.ping_cm();
   da=sensor_4.ping_cm();
if((d<10&&d!=0&&a==1&&carril==0)){    //IZQUIERDA CARRIL 0
    analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(atras,1);
    girarizq90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    delay(1500);
    analogWrite(2,velrapida);
    delay(500);
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
        contarconos();
    vuelta++;


    carril=0;
    direccion++;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
  
  

   d=sensor_2.ping_cm();
  if((carril==0&&d<20&&d!=0&&a==2)||(carril==5&&d<20&&d!=0&&a==2)) {  //DERECHA CARRIL 0
  Serial.println("DERECHACARRIL asjhdjashdhsad");
      analogWrite(2,velrapida);
    delay(850);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(600);
    pro.write(rec+20);
    digitalWrite(atras,1);
    girarder90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(500);
    digitalWrite(adelante,0);
    delay(1700);
    digitalWrite(atras,0);
    digitalWrite(adelante,1);
    delay(600);
        contarconos();
    vuelta++;



    carril=0;
    direccion--;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
delay(4);


  if((carril==8&&d<25&&d!=0&&a==1)||(d<20&&d!=0&&a==1&&carril==5)){    //IZQUIERDA carril 8
  
    Serial.println("IZQUIERDA CARRIL 8");
    analogWrite(2,velrapida);
    delay(650);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(atras,1);
    girarizq90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    digitalWrite(atras,1);
    analogWrite(2,velrapida);
    delay(2800);
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
    delay(600);
    contarconos();
    vuelta++;

    carril=0;
    direccion++;
    hola=0;
    giro++;

if(vuelta>4&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
  }
   
  if((carril==8&&d<25&&d!=0&&a==2)||(d<20&&d!=0&&a==2&&carril==5)){    //derecha carril 8
    Serial.println("IZQUIERDA CARRIL 8");
    analogWrite(2,velrapida);
    delay(450);
    analogWrite(2,vel);
    digitalWrite(adelante,0);
    digitalWrite(atras,0);
    pro.write(rec);
    delay(700);
    pro.write(rec-20);
    digitalWrite(atras,1);
    girarder90();
    digitalWrite(adelante,1);
    pro.write(rec);
    delay(200);
    digitalWrite(adelante,0);
    digitalWrite(atras,1);
    analogWrite(2,velrapida);
    delay(1800);
    digitalWrite(atras,0);
    analogWrite(2,vel);
    delay(500);
    digitalWrite(adelante,1);
    delay(1000);
    contarconos();
    vuelta++;

    carril=0;
    direccion++;
    hola=0;
    giro++;


  }
}}
