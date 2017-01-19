#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 15
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)


const char *palabra[] = {

	"amalgama",
	"narcolepsia",
	"alcorque",
	"suricato",
	"amapola",
	"parguela",
	"bonita",
	"shuriken",
	"hermoso",
	"panenteismo",
	"nemesis",
	"anabasis",
	"antitesis",
	"origen",
	"artopodo",
	NULL
};


int main(int argc, char *argv[]){


	const char *elegida;
	char adivinado[MAX];
	int aleatoria;
	int letra[1];

	srand(time(NULL));
	aleatoria = rand() % CANTIDAD(palabra);
	elegida = palabra[aleatoria];

	//strcpy(adivinado, elegida);
	bzero(adivinado, MAX);

	for(int i=0; i<(int) strlen(elegida); i++)
		adivinado[i]= '-';


	printf("%s\n", adivinado);
	printf("%s\n", elegida);

	return EXIT_SUCCESS;
}
