#include <stdio.h>
#include <stdlib.h>

int main(){


	int cuadrado[10];

	for(int i=1; i<10; i++){
		cuadrado[i]=i*i;
		printf(" %i\n", cuadrado[i]);
	}

	printf("%i\n",cuadrado[0]);




	return EXIT_SUCCESS;
}
