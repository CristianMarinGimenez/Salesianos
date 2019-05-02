#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++;    
    }
    return l;
}

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     int l;
     char *pauxiliar;
     int nveces;
     for(cont=0;cont<5;cont++){
         printf("\nInserta palabra %i: ",cont);
         scanf("%s",aux);  
         l=medida(aux);
         printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);
     }
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     
     //Ordenamiento
     for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        if(*lista[cont]>*lista[cont+1]){
            printf("\nCambio %s por %s",lista[cont],lista[cont+1]);
            pauxiliar=lista[cont];
            lista[cont]=lista[cont+1];
            lista[cont+1]=pauxiliar;
        }
      }
     }
     //Despues del ordenamiento
     printf("\nLISTA ORDENADA:");
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
