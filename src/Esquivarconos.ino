
void esquivarconos(){
  if((hola%2==1&&carril==0&&giro==0&&d>115)){     // primer cono rojo
    analogWrite(2,vel);
    pro.write(derecha);
    delay(750);
    pro.write(rec);
    delay(700);
    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    delay(300);
    
    delay(10);
    Serial.println("ROJO");
    hola=0;
    carril=8;
  }


  if((hola%2==0&&carril==0&&hola!=0&&giro==0&&d>115)){ // primer cono verde
    analogWrite(2,vel);
    pro.write(izquierda);
    delay(800);
    pro.write(rec);
    delay(600);
    pro.write(derecha);
    irader();
    pro.write(rec);
   
    delay(10);

     carril=8;
     Serial.println("VERDE");
     hola=0;
  }



//COMIENZO giro=0
  if((hola%2==1&&carril==0&&giro==4)||(hola%2==1&&carril==0&&giro==8)||(hola%2==1&&carril==0&&giro==0)){ // rojo giro=0 primero
    analogWrite(2,vel);
    pro.write(derecha);
    delay(1200);
    pro.write(rec);
    delay(500);
    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    analogWrite(2,vel);
    delay(900);
    carril=2;
    Serial.println("ROJO");
    hola=0;
    cono1 = 1;



  }

  if((hola%2==0&&carril==0&&hola!=0&&giro==4)||(hola%2==0&&carril==0&&hola!=0&&giro==8)||(hola%2==0&&carril==0&&hola!=0&&giro==0)){  // verde giro=0 primero
    analogWrite(2,vel);
    pro.write(izquierda);
    delay(800);
    pro.write(rec);
    delay(1050);
    pro.write(derecha);
    irader();
    analogWrite(2,vel);
    pro.write(rec);
    delay(10);

     carril=1;
     Serial.println("VERDE");
     hola=0;
     cono1 = 2;
  }

    if((hola%2==0&&carril==2&&hola!=0&&giro==4)||(hola%2==0&&carril==2&&hola!=0&&giro==8)){  // verde2 giro=0 
    analogWrite(2,vel);
    delay(1500);
    pro.write(izquierda);
    delay(1000);
    pro.write(rec);
       while(d>25||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(derecha);
    irader();
    pro.write(rec);
    analogWrite(2,255);

    delay(10);

     carril=3;
     Serial.println("VERDE");
     hola=0;

     cono2= 2;
  }

  if((hola%2==1&&carril==1&&giro==4)||(hola%2==1&&carril==1&&giro==8)){ // rojo2 giro=0 segundo
    analogWrite(2,vel);
    pro.write(derecha);
    delay(1400);
    pro.write(rec);
       while(d>25||d==0){
       d=sensor_2.ping_cm();
    }    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    delay(200);
    
    delay(10);
    carril=4;
    Serial.println("ROJO");
    hola=0;

    cono2 = 1;
  }


  d=sensor_2.ping_cm();


  if((hola%2==1&&carril==0&&giro!=4&&giro!=8)){ // rojo11
    analogWrite(2,gi);
    pro.write(derecha);
    delay(850);
    pro.write(rec);
    delay(1300);
    pro.write(izquierda);
   iraizq();
  
    pro.write(rec);
    analogWrite(2,vel);
    delay(10);
    carril=2;
    Serial.println("ROJO");
    hola=0;
    cono1 = 1;
  }


  if((hola%2==0)&&(carril==0)&&(hola!=0)&&(giro!=0)&&(giro!=4)&&(giro!=8)){  // verde11
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(650);
    pro.write(rec);
    delay(1300);
    pro.write(derecha);
    irader();
    analogWrite(2,vel);
    pro.write(rec);
    delay(300);

     carril=1;
     Serial.println("VERDE");
     hola=0;
     cono1 = 2;
  }



  if((hola%2==0)&&(carril==2)&&(hola!=0)&&(giro!=0&&d>115)||(hola%2==0)&&(carril==2)&&(hola!=0)&&(giro!=4&&d>115)||(hola%2==0)&&(carril==2)&&(hola!=0)&&(giro!=8&&d>115)){      // verde segundo
    delay(500);
    pro.write(rec);
    analogWrite(2,gi);
    pro.write(izquierda);
    delay(1300);
    pro.write(rec);
    while(d>25||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(derecha);
    irader();

    pro.write(rec);
        delay(200);
    
    carril=3;
    hola=0;
    cono2 = 2;
  }
  
  if((hola%2==0)&&(carril==1)&&(hola!=0)||(hola%2==0)&&(carril==1)&&(hola!=0)||(hola%2==0)&&(carril==1)&&(hola!=0)){      // verde segundo de verde
  cono2= 2;
  carril= 3;
  hola=0;

  }

   

    if((hola%2==1&&carril==1&&giro!=0&&d>115)||(hola%2==1&&carril==1&&giro!=4&&d>115)||(hola%2==1&&carril==1&&giro!=8&&d>115)){     // rojo12
    pro.write(rec);
    delay(300);
    pro.write(derecha);
    delay(1700);
    pro.write(rec);
     while(d>20||d==0){
       d=sensor_2.ping_cm();
    }
    pro.write(izquierda);
    iraizq();
    pro.write(rec);
    delay(200);
    analogWrite(2,255);
    
    delay(400);
    carril=4;
    hola=0;
    cono2 = 1;
  }
      if((hola%2==1&&carril==2)){     // rojo segundo de rojo
hola=0;
    cono2 = 1;
    carril=4;

  }}

