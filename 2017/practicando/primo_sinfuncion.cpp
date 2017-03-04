#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int main(int argc, char *argv[]){


	int numero;
	int pos_primo = 0;

	printf("Dime un numero: ");
	scanf(" %i", &numero);

	for(int divisor=1; divisor<=numero; divisor++){
		if(numero%divisor == 0)
			pos_primo += 1;
	}

	if(pos_primo == 2)
		printf("el numero es primo\n");

	if(pos_primo > 2)
		printf("el numero no es primo\n");



	return EXIT_SUCCESS;
}
