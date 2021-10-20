#include <stdio.h>
void main(){
	//Variables Primitivas
	/*int numero = 0;
	char letra = 'a'; //Inicializar o dar un valor
	float numero_flotante; //declarar*/

	//Condicionales
	//simples
	/*if(numero < 6)
		printf("Estas reprobado :c");
	//compuestas
	if(numero >= 6)
		printf("Has aprobado");
	else
		printf("Estas reprobado"); */
	//Combinadas

	/*if(numero >= 6)
		printf("Has aprobado");
	else if(numero == 0)
		printf("No has entregado nada");
		else
			printf("Has reprobado, pero si entregaste algo");*/
	/*char nombre = 'l';
	switch(nombre){
		case 'p': printf("Las marcas son Sharpy, Stabilu y Berel"); break; 
		case 'l':  printf("Las marcas son Norma, NewBalance y Zara"); break;
		default: printf("No hay lo que solicitaste"); break;
	}*/
	/*int contador = 0;
	
	while(contador <= 105){
		printf("%d\n",contador++);
	}*/

	//Analisis de requerimientos
	//Del alumno pedimos Nombre, promedio, donde vives, si tienes hermanos (Cauntos?), si vives con los dos papas o solo con uno o ninguno
	char nombre[20];
	float promedio;
	int codigoPostal; //Camello
	int cantidad_hermanos; //Espaciada

	printf("Bienvenido al programa de CIBEC, favor de introducir tu nombre: ");
	scanf("%s",&nombre);
	//gets(nombre);
	printf("Bienvenido %s, favor de introducir tu promedio: \n",nombre);
	scanf("%f",&promedio);
	printf("Ingresa el codigo postal: \n");
	scanf("%i",&codigoPostal);
	printf("Ingresa la cantidad de hermanos que tengas: \n");
	scanf("%i",&cantidad_hermanos);

	int bandera_trabajo, ganancias, gananciasTotales = 0;
	for(int contador = 0; contador < cantidad_hermanos; contador++){
		printf("El hermano %d trabaja? (0:No/1:Si)\n",contador);
		scanf("%i",&bandera_trabajo);
		if(bandera_trabajo == 1)
		{
			printf("Cuanto gana el hermano %d\n",contador);
			scanf("%i",&ganancias);
			gananciasTotales = gananciasTotales + ganancias; //  20 + 50 = 70
		}
	}

	int bandera_papa, bandera_mama, bandera_otro;

	printf("Vives son tu papa? (0:No/1:Si)\n");
	scanf("%i",&bandera_papa);
	if(bandera_papa == 1){
		printf("Tu papa trabaja? (0:No/1:Si)\n");
		scanf("%i",&bandera_trabajo);
		if(bandera_trabajo == 1)
		{
			printf("Cuanto gana tu papa?\n");
			scanf("%i",&ganancias);
			gananciasTotales = gananciasTotales + ganancias; //70 + 90 = 160
		}
	}

	printf("Vives son tu mama? (0:No/1:Si)\n");
	scanf("%i",&bandera_mama);
	if(bandera_mama == 1){
		printf("Tu mama trabaja? (0:No/1:Si)\n");
		scanf("%i",&bandera_trabajo);
		if(bandera_trabajo == 1)
		{
			printf("Cuanto gana tu mama?\n");
			scanf("%i",&ganancias);
			gananciasTotales = gananciasTotales + ganancias; //70 + 90 = 160
		}
	}

	//printf("Las ganancias totales de tu familia son de %d\n",gananciasTotales);
	int integrantes_familia = cantidad_hermanos;
	if(bandera_papa == 1) integrantes_familia++;
	if(bandera_mama == 1) integrantes_familia++;
	integrantes_familia++; //tu
	int ganancias_por_integrante =  gananciasTotales / integrantes_familia;
	
	if(ganancias_por_integrante < 100)
		printf("Felicidades, ya tienes beca");
	else printf("Eres un ricachon, no necesitas beca");
}