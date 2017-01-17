#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


	char pal[50]="concatenacion es la palabra", c[15];
	int i, tamanopal, j;

	for(i=0; i<strlen(pal); i++){
		/*si no es un espacio en blanco escribimos un _*/
		if(pal[i]!=' ')
			printf("_");
	}
	else(pal[i]==' '){
		printf(" ");
	}
	/* pongo un maximo de 15 oportunidades para adivinar */
	printf("\n introde letra: ");
	scanf(" %s", &c[j]);

	for(i=0; i<strlen(pal);i++){
		if(pal[i]!= c[j] && pal[j]!= ' ')
			printf("_");
	}
		if(pal[i] == c[j]){
			printf(" %c", c[j]);
	}
	else(pal[i]==' '){
		printf(" ");
	}



	return EXIT_SUCCESS;
}
