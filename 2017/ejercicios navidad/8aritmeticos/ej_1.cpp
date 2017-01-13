#include <stdio.h>
#include <stdlib.h>

int main(){


	int numero, fila=1, columna;

	printf("dime el numero de lista: ");
	scanf(" %i", &numero);

	while(numero > 17){

	numero -= 17;
	fila++;
	}

	columna=numero;
	printf("el alumno esta en la fila %i y el la columna %i\n", fila,columna);




	return EXIT_SUCCESS;
}
