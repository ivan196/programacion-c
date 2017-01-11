#include <stdio.h>
#include <stdlib.h>

int main(){

	double n=0;
	double x=0;

	printf("¿cuantos asteriscos quieres? ");
	scanf(" %lf",&n);

	for(int i=0; i<n; i++){
	printf(" %lf*\n", x++);
	}

	return EXIT_SUCCESS;
}

