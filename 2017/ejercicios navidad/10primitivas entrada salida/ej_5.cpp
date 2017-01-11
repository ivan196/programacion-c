#include <stdio.h>
#include <stdlib.h>

int main(){


	char palabras[50];
	char palabras1[25], palabras2[25];

	printf("dime una palabra: ");
	scanf(" %s", palabras1);

	printf("dime otra palabra: ");
	scanf(" %s", palabras2);

	sprintf(palabras, "%s %s", palabras1, palabras2);
	printf("tus palabras son: %s\n", palabras);



	return EXIT_SUCCESS;
}
