#include <stdio.h>
#include <stdlib.h>

int main(){

	int caja1 = 0;
	int caja2 = 0;
	int caja3 = 0;

	printf("¿numero caja1? ");
	scanf(" %i", &caja1);

	printf("¿numero caja2? ");
	scanf(" %i", &caja2);

	caja3=caja1;

	caja1=0;

	caja1=caja2;

	caja2=0;

	caja2=caja3;

	printf(" %i caja1, %i caja2\n",caja1,caja2);


	return EXIT_SUCCESS;
}
