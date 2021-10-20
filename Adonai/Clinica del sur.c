#include <stdio.h>
void main (){
	printf("Hola bienvenido a Clinica del Sur\n");
	int edad,servicio, cantidadUsers;
	char nombre;
	
	printf("Ingrese la cantidad de usuarios que quiere registrar: ");
	//scanf("");
	
	printf("¿Cual es su nombre?\n");
	scanf("%c",&nombre);
	printf("Gracias, introduzca su edad\n");
	scanf("%i",&edad);
	printf("Gracias por la informacion proporcionada, cual es el servicio que busca\n Primera cita=1\n Cita recurrente=2\n Servicios y costos=3\nOpcion: ");
	scanf("%i",&servicio);
	
	//Swich, Case when
	switch(servicio){
		case 1: printf("SERVICIO 1: En un mensaje breve favor de escribir el motivo de la consulta, asi como su numero de telefono, en un maximo de 6 hrs se comunicaran con usted, gracias");break;	
		case 2: printf("SERVICIO 2: Ok, favor de introducir su numero de asignacion, se le notificara al psicologo encargado que ya llego y saldra 5 min antes para que entre a consulta, excelente dia "); break;
		case 3: printf("SERVICIO 3: Favor de ingresar un correo o numero telefonico, para que en breve le proporcionemos toda la informacion, asi como solucionar sus dudas");break;
		default: printf("ERROR!\nPor favor ingresa una opcion valida\n");break;
	}
	/*
	NOTAS:
		Entrada y Salida de datos
		Operaciones Aritmeticas
		Variables Primitivas (int,char,float)
		if, if-else, if-else if, swich (Condicionales) 
		while (ciclo)
		
		Tarea: Utilizando el ciclo While, realiza este mismo programa que se repita la cantidad de veces que el usuario desee
	*/		
}

