#include "EjercicioCalculadora1.h"

int main(){
	//Requerimientos del sistema: Calculadora, 2 numeros, suma
	float numero1;
	float numero2;

	printf("Bienvenido a nuestra primer calculadora, introduce el primer numero\n");
	scanf("%f",&numero1);
	printf("Ahora introduce el segundo\n");
	scanf("%f",&numero2);
	
	suma(numero1,numero2);
	/*resta(numero1,numero2);
	multiplicacion(numero1,numero2);
	division(numero1,numero2);
	*/
	
	
	
	return 1;
}