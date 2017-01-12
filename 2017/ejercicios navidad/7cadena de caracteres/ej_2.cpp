#include <stdio.h>
#include <stdlib.h>

int main(){


	char cadena[10];

	for(int i=9; i>=0; i--){

	cadena[i]=i;

	printf(" %i\n", cadena[i]);
	}




	return EXIT_SUCCESS;
}
