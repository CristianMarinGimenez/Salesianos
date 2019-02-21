#include<iostream>


double transformacion(int eur){
    double respuesta;
    respuesta = 1.13*eur;
    return(respuesta);
}


int main(){
    int eur;
    float respuesta;
    char salir;
    std::cout<<"dime la cifra que quieres pasar de euros a dolares: ";
    std::cin>> eur;
    std::cout<<transformacion(eur);
    std::cout<<"\n Toca cualquier tecla para salir";
    std::cin>>salir;
    
    return 0;



}
