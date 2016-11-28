#include <stdio.h>
#include <stdlib.h>

int main(){
	int decimal;

	printf("decimal: ");
	scanf("%i", &decimal);

	//hacer
	//	importar decimal %2
	//	decimal = decimal /2
	//mientras decimal /2 > 0

	do {
		printf("%i", decimal % 2);
		decimal /=2;

	}while (decimal>0);

	printf("\n");

	return EXIT_SUCCESS;
}
