#include <stdio.h>
#include <stdlib.h>

int main(){


	int tria [10][10];

	for(int i = 0; i < 10; i++){
		for(int o = 0; o < 10; o++){
			if(o !=9)
				tria[i][o] = 0;
			else
				tria[i][o] = 1;
		}
	}


	for(int i = 1; i < 10; i++){
		for(int o = 0; o < 9; o++)
			printf(" %i", tria[i][o]);
		printf("\n");

	}

	return EXIT_SUCCESS;
}
