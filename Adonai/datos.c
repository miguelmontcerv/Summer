#include<stdio.h>
void main()
{
	//Tipos de datos (primitivo)
	//Int: interos
	//Float: flotantes (500)
	//double: float x2 (1000) Numeros muuuy grandes
	//Caracteres: 'a' 'h'
	//Cadena: 'Hola, como estas?' 'anitalavalatina' 'ojo' 'aa'

	//Tipos de datos compuestos
	//Fechas: int int / cadena / int int-int int
	//Horas:  int int : int int
	
	char caracter; //Declarar

	printf("Felicidades por el nacimiento de su bebe, ingrese su genero (Hombre:H o Mujer:M): ");
	scanf("%c",&caracter);

	//Agregar f o F para mujer
	if(caracter == 'H' || caracter == 'h')
		printf("El bebe es hombre\n");
	else if(caracter == 'M' || caracter == 'm')
		printf("El bebe es mujer\n");
	else
		printf("Es otro genero\n");
}