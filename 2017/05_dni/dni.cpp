#include <stdio.h>
#include <stdlib.h>

int main(){

	int dni;
	int pos;

	printf("dni: ");
	scanf(" %i", &dni);

	pos = dni % 23;

	printf("de las siguientes letras: \n"
		"\tTRWAGMYFPDXBNJZSQVHLCKE\n"
		"la tuya es la %i\n", pos + 1);
	printf("en orden la tuya es la: %c\n", 'A' + pos);

	switch(pos){
		case 0
			letra = 'T'
			break;
	}

	printf(" %c\n", letra);

	return EXIT_SUCCESS;
}
