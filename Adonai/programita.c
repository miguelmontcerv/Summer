/* SINTAXIS DEL LENGUAJE C */
//bibleoteca
#include<stdio.h>
//Funcion principal
void
main()
{
	printf("Hola, buenos dias, la clase de hoy una calculadora\n");
	int numero1; //Declarar Variable
	int numero2; //int: entero (integer)

	printf("Introduce el primer numero: ");
	scanf("%i",&numero1);
	printf("Introduce el segundo numero: ");
	scanf("%i",&numero2);

	//Declarar
	int suma,resta,multiplicacion;
	float divicion;
	//inicializar
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;

	float auxiliar1 = (float)numero1;
	float auxiliar2 = (float)numero2;

	divicion = auxiliar1 / auxiliar2;

	printf("La suma es: %i\n",suma);
	printf("La resta es: %i\n",resta);
	printf("La multiplicacion es: %i\n",multiplicacion);
	printf("La divicion es %.10f\n",divicion );

}