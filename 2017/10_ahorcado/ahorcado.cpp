#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 10
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) -1)



const char *palabras[]={
	"lolicon",
	"hentai",
	"anime",
	"rias",
	"ako-nee",
	"riko-nee",
	NULL
};

int main(int argc, char *argv[]){



	const char *elegida;
	char adivina[MAX];
	int random;
	char letra;
	int intentos = 20;

	srand(time(NULL));
	random = rand() % CANTIDAD(palabras);
	elegida = palabras[random];



	bzero(adivina, MAX);
	for(int i=0; i<(int) strlen(elegida); i++){
		adivina[i] = '-';

	printf(" %c", adivina[i]);
	}


	do{
		printf("\ndime una letra: ");
		scanf(" %c", &letra);

		for(int i=0; i<(int) strlen(elegida); i++){

		if(elegida[i]==letra)
		adivina[i]=letra;

		printf(" %c", adivina[i]);
		}
		printf("\n");

	}while(intentos>0);




	return EXIT_SUCCESS;
}
