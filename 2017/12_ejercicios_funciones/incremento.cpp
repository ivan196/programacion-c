#include <stdio.h>
#include <stdlib.h>

double x_cuad(double x){

	return x*x;
};

int main(int argc, char *argv[]){

	double aceleracion;
	double velocidad;
	double velocidad2;
	double tiempo;
	double tiempo2;

	printf("dime el tiempo: ");
	scanf(" %lf", &tiempo);

	velocidad=x_cuad(tiempo);

	(velocidad2-velocidad)/(tiempo2-tiempo);

	printf(" %.2lf\n", x_cuad(tiempo));

	return EXIT_SUCCESS;
}
