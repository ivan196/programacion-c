#include <stdio.h>
#include <stdlib.h>

void leer(double *base, double *exponente){

	printf("numero de la base: ");
	scanf(" %lf", base);

	printf("numero del exponente: ");
	scanf(" %lf", exponente);


	}

int main(int argc, char *argv[]){

	double base, exponente;

	leer(&base, &exponente);

	printf("tu base es %.0lf\n", base);
	printf("tu exponente es %.0lf\n", exponente);


	return EXIT_SUCCESS;
}

