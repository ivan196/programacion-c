#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define DELTA .1

struct TCoordenada {
	double x;
	double y;
}

int main(int argc, char *argv[]){

	struct t = 0.;
	struct TCoordenada a = { 0., -10.}
			   v = { 20., 40.}
			   s = {}

	for (t=0.; s>=0.; t+=DELTA){
		printf("t[%.2lfs] =>v: %.2lfm/s => s: %.2lfm\n", t, v, s);
		v += a * DELTA;
		s += v * DELTA;
	}

	return EXIT_SUCCESS;
}
