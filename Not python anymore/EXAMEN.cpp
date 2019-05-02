#include<iostream>
int main(){
    char palabra[10];
    int longitud;
    char salir;
    std::cout<<"Introduce una palabra";
            std::cin>>palabra;
            longitud=strlen(palabra);
            std::cout<<"La palabra mide: "<<longitud;
            ;std::cout<<"\nToca cualquier tecla para salir";
            ;std::cin>>salir;
    return 0;
    }
