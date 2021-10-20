#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona{
	
	char nombre[10];
	int edad;
	char sexo;
	
}typedef Persona;

int main(){
	
	Persona *familia;
	int cantidadBeneficiarios;
	
	printf("Bienvenido al programa del gobierno. Ingrese cuantos beneficiaros va a registrar, incluyendose\n");
	scanf("%d",&cantidadBeneficiarios);
	
	familia = (Persona*)malloc(cantidadBeneficiarios*sizeof(Persona));
	
	if(familia==NULL){
		printf("No se pudo pedir la memoria\n");
		return -1;
	}
	else
		printf("Se creo la memoria correctamente\n");
	
	familia[0].edad = 5;
    strcpy(familia[0].nombre,"Juan");

    printf("%i",familia[0].edad);
    printf("%s",familia[0].nombre);

	//familia->nombre = "Juan";
	//(familia+1)->edad = 2;
	
	
	
	return 0;
}