#include <stdio.h>
#include <stdlib.h>

int main(){


	char numero[100];
	int contador = 0;

	printf("dime tu numero: ");
	scanf(" %s", numero);

	while(numero[contador] != '\0')
		contador--;

	printf("tu numero al reves es: ");

	while(contador >= 0){
		printf(" %c", numero[contador]);
		contador--;
	}

	printf("\n");



	return EXIT_SUCCESS;
}
