#include<iostream>
main(){
       int tablero[5][5];
       int fil;
       int col;
       int relleno;
       char salir;
       for(fil=0;fil<=4;fil++){
           if(fil%2==0){
              if(col%2==0)          
              relleno=0;
              }
              else{
                   relleno=1;
                   }
              else{
                   if(col%2==0)          
              relleno=0;
                        else{
                   relleno=1;
                   }                                      
         for(col=0;col<=4;col++){
             tablero[fil][col]=relleno;                                              
             }
             for(fil=0;fil<=4;fil++){
                 for (col=0;col<=4;col++){
                     std::cout<<tablero[fil][col];
                     }
                     }
                     std::cout<<"\n Toca cualquier tecla para salir";
                     std::cin>>salir;
                     return 0;
}
}
}
}
       
