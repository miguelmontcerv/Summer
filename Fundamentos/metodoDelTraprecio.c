#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	float limite_inferior, limite_superior,N = 2000000; //2,147,483,647 entero maximo
	float sumatoria,delta_x,x,integral;
	
	printf("Calculo de una integral por el metodo numerico del Trapecio\nIngresa el limite inferior: ");
	scanf("%f",&limite_inferior);
	printf("Ingresa el limite superior: ");
	scanf("%f",&limite_superior);

	//  1/x
	delta_x = (limite_superior - limite_inferior) / N;
	//printf("delta: %f\n",delta_x);	 

	sumatoria = 0;
	x = 1;

	for (int i = 1; i <= N+1; ++i)
	{
		if(i == 1 || i == N+1)
			if(i == 1)
				sumatoria = sumatoria + (1/x);
			else
				sumatoria = sumatoria + (1/(x+=delta_x));
		else
			sumatoria = sumatoria + 2*(1/(x+=delta_x));
		//printf(" x: %f\n",x);
	}
	//printf("sumatoria %f\n",sumatoria);
	integral = (delta_x/3) * sumatoria;

	printf("%f\n",integral);

	return 0;
}