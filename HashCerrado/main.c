#include"hash.h"

int
main(void)
{
	int busqueda = 0;
	struct TablaHash *tabla = NULL;

	AgregarDato(&tabla,"Daniel Ernesto");
	AgregarDato(&tabla,"Ernesto Daniel");
	AgregarDato(&tabla,"Miguel");
	AgregarDato(&tabla,"Maria Jose");
	

	busqueda = BuscarDato(tabla,"Daniel Ernesto");

	printf("Si es 1 se encontro, si es 0 no se pudo encontrar: %d\n",busqueda);


	EliminarDato(&tabla,"Daniel Ernesto");
	busqueda = BuscarDato(tabla,"Daniel Ernesto");

	printf("Si es 1 se encontro, si es 0 no se pudo encontrar: %d\n",busqueda);

return 0;
}