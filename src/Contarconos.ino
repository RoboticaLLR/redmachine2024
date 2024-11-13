

void contarconos(){

if (vuelta==1&&vueltacompleta!=1){
cono11 = cono1;// cono  = rojo = 1
cono12 = cono2;//cono  = verde = 2      cono = no hay = 0
cono1=0;
cono2=0;
vuelta=1;
}
if (vuelta==2&&vueltacompleta!=1){
cono21 = cono1;
cono22 = cono2;
cono1=0;
cono2=0;
vuelta=2;
}
if (vuelta==3&&vueltacompleta!=1){
cono31 = cono1;
cono32 = cono2;
cono1=0;
cono2=0;
vuelta=3;
}
if (vuelta==4&&vueltacompleta!=1){
cono41 = cono1;
cono42 = cono2;
cono1=0;
cono2=0;
vuelta=4;
}



if(vuelta>3&&vuelta!=0&&vueltacompleta==0){
vueltacompleta= 1;
}

   if(vuelta>=5&&vuelta!=0){
vuelta= vuelta-4;
}
}
