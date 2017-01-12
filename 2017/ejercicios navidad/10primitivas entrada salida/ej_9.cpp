#include <stdio.h>
#include <stdlib.h>

int main(){

	char nombreapellido[50];
	char nombre[25], apellido[25];

	printf("dime tu nombre:\n");
	scanf(" %s", nombre);

	printf("dime tu apellido:\n");
	scanf(" %s", apellido);

	sprintf(nombreapellido, " %s %s", nombre, apellido);
	printf("tu nombre y apellidos son: %s\n", nombreapellido);





	return EXIT_SUCCESS;
}
