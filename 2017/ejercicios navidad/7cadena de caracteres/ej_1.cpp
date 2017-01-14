#include <stdio.h>
#include <stdlib.h>

int main(){


	char dni1[9];
	int dni2;

	printf("dime el dni: ");
	scanf(" %s", dni1);

	dni2=atoi(dni1);
	printf(" %i\n", dni2);



	return EXIT_SUCCESS;
}
