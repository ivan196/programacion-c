#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0X100
#define MAX 0x10

int main(int argc, char *argv[]){


	char buffer[N];
	char *palabra[MAX];

	/*bloque de entrada de datos*/
	for(int i=0; i<MAX; i++){
		printf("nombre: ");
		fgets(buffer, N, stdin);

		palabra[i]=(char *) malloc( strlen(buffer)+1);
		strcpy(palabra[i], buffer);
	}

	printf("he terminado de leer\n");

	/*bloque de salida*/
	for(int i=0; i<MAX; i++)
		printf(" %s\n", palabra[1]);

	for(int i=0; i<MAX; i++)
		free(palabra[i]);






	return EXIT_SUCCESS;
}
