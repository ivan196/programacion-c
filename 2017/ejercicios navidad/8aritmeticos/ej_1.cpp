#include <stdio.h>
#include <stdlib.h>

int main(){


	int numero, fila=1;

	printf("dime el numero de lista: ");
	scanf(" %i", &numero);

	while(numero >= 17){

	numero = 17;
	fila++;
	}


	printf("el alumno esta en la fila %i y el la columna %i\n", fila, numero);




	return EXIT_SUCCESS;
}
