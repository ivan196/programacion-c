#include <stdio.h>
#include <stdlib.h>

int main(){


	int vector[2];
	int vector2[2];
	int escalar;

	printf("valor de x: ");
	scanf(" %i", &vector[0]);

	printf("valor de y: ");
	scanf(" %i", &vector[1]);


	printf("valor de x: ");
	scanf(" %i", &vector2[0]);

	printf("valor de y: ");
	scanf(" %i", &vector2[1]);

	escalar = vector[0] * vector2[0] + vector[1] * vector2[1];
	printf("el producto escalar es: %i\n", escalar);


	return EXIT_SUCCESS;
}
