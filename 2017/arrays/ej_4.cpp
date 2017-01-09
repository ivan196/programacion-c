#include <stdio.h>
#include <stdlib.h>

int main(){

	int x, y, z, count;

	x = 0;
	y = 1;

	printf("0\n 1\n", z);

	for(count = 1; count <= 20; count = count + 1){
		z = x + y;
		printf(" %i\n", z);
		x = y;
		y = z;
	}

	return EXIT_SUCCESS;
}
