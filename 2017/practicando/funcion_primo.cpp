#include <stdio.h>
#include <stdlib.h>

bool primo(int n){

	for(int i=2;i<n;i++){

		if(n%i==0)
			return false; //false es 0//
		}

		return true; //true es 1

	}


int main(int argc, char *argv[]){

	printf(" %i %s primo\n", 5,
			primo(5)? "es" : "no es");

	return EXIT_SUCCESS;
}
