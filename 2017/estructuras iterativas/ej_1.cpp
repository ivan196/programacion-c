#include <stdio.h>
#include <stdlib.h>

int main(){


	int numero=0;

	while(numero<1 || numero>10){

		printf("escribe un número entre el 1 y 10:\n");
		scanf(" %i", &numero);
	}

	printf("tu numero es: %i\n", numero);



	return EXIT_SUCCESS;
}
