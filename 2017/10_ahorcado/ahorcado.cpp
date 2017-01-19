#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 10
#define CANTIDAD(X) (sizeof( (x) ) / sizeof(char *) -1)



const char *palabras[]={
	"perro",
	"gato",
	"ordenador",
	"lapiz",
	"carpeta",
	NULL
};

int main(int argc, char *argv[]){



	const char *elegida;
	char adivina[MAX];
	int random;
	char letra[1];
	int intentos = 0;

	srand(time(NULL));
	random = rand() % CANTIDAD(palabras);
	elegida = palabras[random];






	return EXIT_SUCCESS;
}
