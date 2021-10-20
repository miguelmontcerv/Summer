#include<stdio.h>
#include<stdlib.h>

int main(){
	//Vectores x, arreglos estaticos
	int vector[10] = {150,5,948,1};
	int i,j,n=10,aux;
	
	//Llenado
	for(i = 0; i<n; i++)
		vector[i] = rand() % 50;
	
	printf("Arreglo Desordenado\n");
	
	for(i = 0; i<n; i++)
		printf("%d ",vector[i]);
	
	
   	for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++){
           if (vector[j] > vector[j+1]){
              	aux = vector[j];
              	vector[j] = vector[j+1];
              	vector[j+1] = aux;
		   }
	   }
	}
	
	printf("\nArreglo Ordenado\n");
	for(i = 0; i<n; i++)
		printf("%d ",vector[i]);
		
	int min = vector[0];
	int max = vector[9];
	//Busqueda Binaria
	
	
return 0;
}
