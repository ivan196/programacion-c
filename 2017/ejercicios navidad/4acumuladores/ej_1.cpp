#include <stdio.h>
#include <stdlib.h>

int main(){


	int num;
	int suma = 0;
	int media = 0;

	for(int i=0; i<10; i++){
		printf("dime tus 10 números: ");
		scanf(" %i", &num);
		suma = suma + num;
	}
	media = suma / 10;
	printf("la media es %i\n", media);




	return EXIT_SUCCESS;
}
