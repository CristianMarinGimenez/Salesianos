#include<iostream>
int media(float num1, float num2, float num3, float num4){
    float respuesta;
    respuesta=(num1+num2+num3+num4)/4;
    return respuesta;
}

int main(){
    float num1,num2,num3,num4;
    std::cout<<"\n Introduce numero 1";
    std::cin>>num1;
    
    std::cout<<"\n Toca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}    
