#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

/* metase 23<intro> para probar */



int multiplica(int numero1,int numero2){

	return numero1*numero2;
}


int main(int argc, char *argv[]){

	int a,b;

	printf("%i", a=getchar() - '0');

	printf("x%i", b=getchar() - '0');

	printf("=%i\n", multiplica(a,b));


	return EXIT_SUCCESS;
}
