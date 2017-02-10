#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>


char *palabras[]{
	"opcion 1",
	"opcion 2",
	NULL
};

int menu(){

	int opcion1;

	printf("1.-opcion1\n");
	scanf(" %i", &opcion1);

}



int main(int argc, char *argv[]){


	char opcion=menu();
	


	return EXIT_SUCCESS;
}
