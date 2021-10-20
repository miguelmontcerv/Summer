#include<stdio.h>
void main(){
	//Datos primitivos 
	char caracter;
	//Tipos de dato complejo
	char nombre[5]; 
	nombre[0] = 'A';//[n-1]
	nombre[1] = 'd';
	nombre[2] = 'o';
	nombre[3] = 'n';
	nombre[4] = 'a';
	nombre[5] = 'i';//[n-1]
	printf("El nombre es: %s\n",nombre); //S = String
	
	printf("\nIntroduce otro nombre: ");
	scanf("%s",&nombre);
	//gets(nombre);
	
	printf("El nombre es: %s",nombre); //S = String
	
	printf("La casilla de enmedio es %c",nombre[2]);
}
