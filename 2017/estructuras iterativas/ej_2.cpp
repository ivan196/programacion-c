#include <stdio.h>
#include <stdlib.h>

int main(){


	int total = 0, numero = 0, media, contador = 0;

	printf("agrega las notas de la clase (para parar debes meter un numero negativo: \n");

	while(numero > -1){
		printf(" %iº nota:", contador+1);
		scanf(" %i", &numero);
		total += numero;

		if(numero > -1)
			contador++;
	}

	media = total/contador;
	printf("tu media es: %i\n", media);




	return EXIT_SUCCESS;
}
