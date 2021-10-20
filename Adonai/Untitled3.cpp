#include<stdio.h>
int main(){
	//Ciclos: While
	int contador = 1;
	int cantidadProductos;
	int precioInicial, precioFinal = 0;
	
	//Partes escenciales: Inicio, condicion (cuando terminarlo), incremento
		for(contador = 1; contador <= 100; contador = contador + 1){
			printf("%i\n",contador);
		}
		
		contador = 1;
		while(contador <= 100){
			printf("%i\n",contador);
			contador = contador + 1;
		}
	
	/*printf("Bienvenido a Walmart online, ingrese la cantidad de productos que se va a llevar: ");
	scanf("%i",&cantidadProductos);
	
	while(contador <= cantidadProductos){ //Mientras el contador sea menor al limite		
		printf("Producto N.%i\n Ingrese su precio: ",contador); //Imprime el contador, el procedimineto
		scanf("%i",&precioInicial);
		precioFinal = precioFinal + precioInicial;
		contador = contador + 1; //Incrementa el contador
	}
	
	if(cantidadProductos > 3)
		printf("El precio final era %i ahora es: %i",precioFinal,precioFinal-10);
	else
		printf("El precio final es: %i",precioFinal);*/
		
			
return 4;
}
