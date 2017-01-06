#include <stdio.h>
#include <stdlib.h>

int main(){


	int numeros=0, muro=0;

	for(int i=0; i<10; i++){
		printf("dime tu numero: ");
		scanf(" %i", &numeros);
	if(i==0)
		muro = numeros;
	if(numeros <= muro)
	muro = numeros;
	}
	print("el numero menor es: %i\n", muro);


	return EXIT_SUCCESS;
}
