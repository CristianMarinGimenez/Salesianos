#include<stdio.h> 
#include<iostream> 
int main (){
    int x;
    int y;
    char salir;
    x=3;
    y=5;
    int *px;
    px=&x;
    printf("direccion x=%X direccion y=%X" ,&x,&y);
    printf("\n contenido x=%d contenido y=%d" ,x,y);    
    std::cout<<"\n Toca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
