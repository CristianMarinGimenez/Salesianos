#include<iostream>//Es una instruccion al preprocesador
main(){
       //este programa cuenta hasta 10
       int i;
       char salir;
       //los for son un poco distintos
       // i++ es lo mismo que i=i+1
       for (i=10 ; i>0;i--){
           std::cout<<i;
           std::cout<<"\n";
           }
       std::cout<<"Toca cualquier Tecla:";
       std::cin>>salir;//instruccion de salida   
  

}
