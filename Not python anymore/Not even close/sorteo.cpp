#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    float lista[5];
    int i;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(i=0;i<5,i++;){
                      lista[i]=rand()%6+1;
                      std::cout<<lista[i]<<"\n";
    }
    std::cout<<"toca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}             
