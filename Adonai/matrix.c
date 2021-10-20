#include<stdio.h> //Bibleoteca:

void main(){ //Funcion principal

	int maximo = 0; //Inicia la variable
	printf("Introduce el numero maximo: "); //Pide el dato
	scanf("%i",&maximo); //Guarda el dato
	
	int contador = 0;
	//Ascendente
	printf("Ascendente\n");
	while(contador <= maximo){
		printf("%i\n",contador);
		contador = contador + 1;
	}
	contador = contador - 1;
	printf("\nDescendente\n");
	while(contador >= 0){
		printf("%i\n",contador);
		contador = contador - 1;
	}
	
}