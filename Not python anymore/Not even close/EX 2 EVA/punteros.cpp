#include<stdlib.h>
#include<string.h>
#include<iostream>

int main(){
	int cont;
    int salir;
	//Definimos el vector de PUNTEROS
	int nletras;
	char *palabra;
	char *lista[3];//5 posiciones de memoria que apuntan a 5 palabras
	//Procedimiento
	//1. Leo una palabra
	std::cout<<"Palabra: ";
	std::cin>>palabra;
	//2. Averiguo cuántas letras tiene
	nletras=strlen(palabra);
	//3. Reservo memoria para guardar la palabra.
	lista[0]=malloc(nletras*sizeof(char));
	//4. Escribo la palabra en la memoria reservada
	strcpy(lista[cont],palabra);
	//5. Volvemos al punto 1.
	
	printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
