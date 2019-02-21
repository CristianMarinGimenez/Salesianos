#include<iostream>
/*este programa sirve para saber leer 10 numeros*/
main(){
       float num[10];
       int i;
       char salir;
       float suma=0;
       float n_numeros;
       float mayor,menor;
       float media;
       std::cout<< "cuantos numeros quieres introducir: ";
       std::cin>>n_numeros;
       for(i=0;i<n_numeros;i++){
         std::cout<<"Dime un numero: ";
         std::cin>>num[i];
       }
       //Ahora voy a enseñar mis numeros
       std::cout<<"lista de los numeros: \n";
       for(i=0;i<n_numeros;i++){
         std::cout<<num[i];
       }
       mayor=num[0];
       for(i=1;i<n_numeros;i++){
         if(num[1]>mayor){
           mayor=num[i];
         }
       }
       std::cout<<"\n el mayor es: "<< mayor;
       std::cout<<"\n Toca cualquier tecla para salir" ;
       std::cin>>salir;
       return 0;
} 
                           
