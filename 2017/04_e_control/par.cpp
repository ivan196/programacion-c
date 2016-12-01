#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;

	printf("numero: ");
	scanf(" %i", &n);

	if (n % 2 == 0)
		printf("el numero %i es par.\n", n);
	

	return EXIT_SUCCESS;
}
