#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){


	int perfecto,
	    sum = 0;

	printf("número: ");
	scanf(" %i", &perfecto);

	for(int div=perfecto/2;div>0;div--)
		if(perfecto %  div == 0)
			sum += div;

	printf(" %i", perfecto);
	if(sum != perfecto)

	printf(" es perfecto.\n");



	return EXIT_SUCCESS;
}
