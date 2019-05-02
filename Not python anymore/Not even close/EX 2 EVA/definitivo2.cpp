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

int contar_consonantes(char palabra[]){
      int n_consonantes=0;
    int cont=0;
    while(palabra[cont]!='\0'){
          if(palabra[cont]=='b' || palabra[cont]=='c' || palabra[cont]=='d'|| palabra[cont]=='f'|| palabra[cont]=='g' || palabra[cont]=='h' || palabra[cont]=='j' || palabra[cont]=='k' || palabra[cont]=='l' || palabra[cont]=='m' || palabra[cont]=='n' || palabra[cont]=='ñ' || palabra[cont]=='p' || palabra[cont]=='q' || palabra[cont]=='r' || palabra[cont]=='s' || palabra[cont]=='t' || palabra[cont]=='v' || palabra[cont]=='w' || palabra[cont]=='x' || palabra[cont]=='y' || palabra[cont]=='z') {
             n_consonantes++;
          }             
          cont++;  
    }      

      return(n_consonantes);           
}


int main(){
     char *lista[6];
     int salir;
     char aux[15];
     int cont;
     int l;
     char *pauxiliar;
     int nveces;
     for(cont=0;cont<6;cont++){
         printf("\nInserta palabra %i: ",cont);
         scanf("%s",aux);  
         l=medida(aux);
         printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);
     }
     for(cont=0;cont<6;cont++){
         printf("\n%s",lista[cont]);
         }
         printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
int fracaso(){
    
}
