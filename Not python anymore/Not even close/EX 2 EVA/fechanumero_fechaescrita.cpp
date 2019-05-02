#include<iostream>
using namespace std;
 
string dias(int dia){
 switch(dia){
   case 1:return"uno";break;
   case 2:return"dos";break;
   case 3:return"tres";break;
   case 4:return"cuatro";break;
   case 5:return"cinco";break;
   case 6:return"seis";break;
   case 7:return"siete";break;
   case 8:return"ocho";break;
   case 9:return"nueve";break;
   case 10:return"diez";break;
   case 11:return"once";break;
   case 12:return"doce";break;
   case 13:return"trece";break;
   case 14:return"catorce";break;
   case 15:return"quince";break;
   case 16:return"diesciseis";break;
   case 17:return"diescisiete";break;
   case 18:return"diescisiocho";break;
   case 19:return"diescinueve";break;}
}
string meses(int mes){
 switch(mes){
   case 1:return "de Enero";break;
   case 2:return"de Febrero";break;
   case 3:return"de Marzo";break;
   case 4:return"de Abril";break;
   case 5:return"de Mayo";break;
   case 6:return"de Junio";break;
   case 7:return"de Julio";break;
   case 8:return"de Agosto";break;
   case 9:return"de Septiembre";break;
   case 10:return"de Octubre";break;
   case 11:return"de Noviembre";break;
   case 12:return"de Diciembre";break;
  }
}
 
string decenas(int dec){
 switch (dec){
 
  case 20:return "veinte"; break;
  case 30:return "treinta"; break;
  case 40:return "cuarenta"; break;
  case 50:return "cincuenta"; break;
  case 60:return "sesenta"; break;
  case 70:return "setenta"; break;
  case 80:return "ochenta"; break;
  case 90:return "noventa"; break;}
  }
 
string centenas(int cent){
 switch(cent){
  case 100:return "cien"; break;
  case 200:return "doscientos"; break;
  case 300:return "trescientos"; break;
  case 400:return "cuatrocientos"; break;
  case 500:return "Quinientos"; break;
  case 600:return "seicientos"; break;
  case 700:return "setecientes"; break;
  case 800:return "ochocientos"; break;
  case 900:return "noviencientos"; break;}
}
 
int main(){
int dia,mes,año,T;
string sfinal="";
cout<<"ingresa fecha: ";
cin>>dia;
cin>>mes;
cin>>ano;
 
if (dia<20 && (año<20) && (mes<13)){
  sfinal=dias(dia)+" "+meses(mes)+" de dos mil "+dias(año);
  }
  else if ((dia>19)&& (dia<30)){
 
    T=dia-20;
    if (T==0){
      sfinal=decenas(dia)+" "+meses(mes)+" de dos mil "+dias(año);
     }
     else
     {sfinal="veinte y "+ dias(T)+" "+meses(mes)+" de dos mil "+dias(año);}
 
   }
 
cout<<sfinal;
 
cin.get();
cin.get();
return 0;}
