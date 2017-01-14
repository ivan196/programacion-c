#include <stdio.h>
#include <stdlib.h>

int main(){

	char ch;
	char nombre[20], apellido[20];

	printf("dime nombre: ");
	scanf(" %[A-Z]s", nombre);

	printf("lo que recigemos del scanf es: &s\n", nombre);
	printf("lo que  habia quedado en el buffer: ");

	while((ch=getchar())!='\n')
		printf(" %c\n", ch);



	return EXIT_SUCCESS;
}
