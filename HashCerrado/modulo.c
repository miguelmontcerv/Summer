#include<stdio.h>
int main(int argc, char const *argv[])
{
	 int numero = 0, i;
	 char *palabra = "Jose Maria";
  	
  	int const p = 9973, a = 509, b = 7372;
  
  	int limite = 200;	//Constantes para Hasheo Primo

  	for (i = 0; *(palabra + i) != '\0'; i++)
    {
      numero = numero + *(palabra+i);
    }
    
    int retorno = (((numero * a) + b) % p) % limite;

	printf("El modulo es: %d\n",retorno);

	return 0;
}