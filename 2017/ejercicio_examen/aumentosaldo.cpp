#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>


void invierte(char *nombre){
	
	char aux;

	for(int i=0; i<sizeof(nombre); i++){
	
		
		aux=nombre[i];
		nombre[i]= nombre[(sizeof(nombre))-i];
		nombre[sizeof(nombre)-i] = aux;

	
	}

}



int main(int argc, char *argv[]){

	char nombre[]="me llamo jose manuel";


	printf("%s\n",nombre);



	invierte(nombre);

	printf("%s\n",nombre);


	return EXIT_SUCCESS;
}
