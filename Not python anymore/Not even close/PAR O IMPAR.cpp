#include<iostream>
main(){
       int n_maximo=100;
       int i;
       char salir;
       for (i=1;i<=n_maximo;i++){
           if(i%2==0){
                      std::cout<<i;
                      std::cout<<" es PAR";
           }else{
                 std::cout<< i;
                 std::cout<< "es impar";
                 }
           }
           std::cout<<"SE ACABO LO QUE SE DABA \n";
           std::cout<<"pulsa para salir: ";
           std::cin>>salir;
           }
