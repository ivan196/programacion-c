#include <stdio.h>
#include <stdlib.h>

int main(){


	char nombre_apellido[30];
	char nombre[15];
	char apellido[15];



	printf("dime tu nombre: ");
	


	fgets(nombre, 15, stdin);

	printf("dime tu apellido: ");
	


	fgets(apellido, 15, stdin);

	sprintf(nombre_apellido, "%s %s", nombre, apellido);
	printf("tu nombre es: %s %s\n", nombre, apellido);




	return EXIT_SUCCESS;
}
