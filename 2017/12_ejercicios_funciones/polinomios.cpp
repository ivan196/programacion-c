#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double num[20];

	int num2, x, resultado=0;

	//el numero de terminos de polinomio
	printf("Números que vas a poner: ");
	scanf(" %i", &num2);

	//Guarda los numeros
	printf("Escribe los numeros: ");
	for(int i=0; i<num2; i++){
		scanf(" %lf", &num[i]);
	}

	for(int i=0; i<num2; i++){
		printf("%lf\n", num[i]);
	}

	return EXIT_SUCCESS;
}
