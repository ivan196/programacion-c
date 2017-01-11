#include <stdio.h>
#include <stdlib.h>

int main(){


	int rojo, amarillo, azul;

	printf("¿tu color tiene rojo?");
	scanf(" %i", &rojo);

	printf("¿tu color tiene amarillo?");
	scanf(" %i", &amarillo);

	printf("¿tu color tiene azul?");
	scanf(" %i", &azul);



	if(rojo == 1){
		if(amarillo == 1){
			if(azul == 1){
				printf("tu color es el marron");
			} else{
				printf("tu color es el naranja");
			}
		} else {
			if(azul == 1){
				printf("tu color es el morado");
			} else{
				printf("tu color el rojo");
			}
		}
	} else{
		if(amarillo == 1){
			if(azul == 1){
				printf("tu color es el verde");
			} else{
				printf("tu color es el amarillo");
			}
		} else{
			if(azul == 0){
				printf("tu color es azul");
			} else{
				printf("no tienes ningun color");
			}
		}
	}


	return EXIT_SUCCESS;
}
