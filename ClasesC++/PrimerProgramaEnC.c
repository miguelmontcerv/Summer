//Sintaxis: ¿Cómo esta escrito un programa?
//libreria
#include<stdio.h> //std:Teclado, i:input, o:output,h:header(cabecera)
//Funcion Principal

int main(){	
	printf("Buenas Nochess\n");
	printf("Hola Perla, bienvenida al mundo de la programacion\n");
	printf("Buenas Tardes\n");
	//Antiguo,Pertenece al sistema desde el incio
	//Tipos de datos primitivos 
	//Dato:"Perla" "ESCOM" "Perjura EDOMEX" "9.8" "9"
	//Información: "Perla viaja hacia la ESCOM desde Perjura EDOMEX"
	
	int numerititito; //Declarar variable
	
	numerititito = 14; //Inicializar

	printf("El numero es: %i\n",numerititito);
	
	numerititito = 45;
	
	printf("El nuevo valor de numero es: %i, adios\n",numerititito);
	
	numerititito = 98.9;
	
	printf("El nuevo valor de numero es: %i, adios\n",numerititito);
	
	printf("Ahora digita tu un numero: ");
	
	scanf("%i",&numerititito);
	printf("El nuevo valor de numero es: %i, adios\n",numerititito);
return 0;
}
