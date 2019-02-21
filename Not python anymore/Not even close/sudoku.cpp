#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    char matriz[10][10];   
    int fil,col;
    int posx, posy;
    char palabra[10];
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<10;fil++){
        for(col=0;col<10;col++){
            matriz[fil][col]=rand()%26+65;
            std::cout<<matriz[fil][col];
        }
        std::cout<<"\n";
    }
    posx=rand()%10;
    posy=rand()%10;
    matriz[posx][posy]='*';
    std::cout<<"NUEVA MATRIZ\n\n";
    for(fil=0;fil<10;fil++){
        for(col=0;col<10;col++){
            std::cout<<matriz[fil][col];
        }
        std::cout<<"\n";
    }
            std::cout<<"\n";
            ;std::cout<<"\nToca cualquier tecla para salir";
            ;std::cin>>salir;
    ;return 0;
}  
