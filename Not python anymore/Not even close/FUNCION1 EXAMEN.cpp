#include<iostream>
int main(){
    int num1, num2, num3, num4,;
    float respuesta;
    char salir;
    std::cout<<"Dime un numero" ;
    std::cin>> num1;
    std::cout<<"Dime un numero" ;
    std::cin>> num2;
    std::cout<<"Dime un numero" ;
    std::cin>> num3;
    std::cout<<"Dime un numero" ;
    std::cin>> num4;
    respuesta = num1*num2*num3*num4;
    std::cin>>respuesta;
    std::cout<<"\n Toca cualquier tecla para salir";
    std::cin>>salir;
    
    return 0;
                           
}
