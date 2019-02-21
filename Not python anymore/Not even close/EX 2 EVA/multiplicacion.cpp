#include<iostream>


int multiplica_4(int num1,int num2, int num3, int num4){
      int respuesta;
      respuesta = num1*num2*num3*num4;        
      return(respuesta);         
}



int main(){
    int num1, num2, num3, num4;
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
    
    std::cout<<multiplica_4(num1,num2,num3,num4);
    std::cout<<"\n Toca cualquier tecla para salir";
    std::cin>>salir;
    
    return 0;
                           
}
