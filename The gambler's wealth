#include <stdio.h>
#include <math.h>

double WealthOfGambler(double *b, double *p, double *o, int n) {
	return pow(2, n*DoublingRate(p, b, o, n));
}


int main() {
	double p[4] = {0.1, 0.2, 0.3, 0.4};
	double b[4] = {0.25, 0.25, 0.25, 0.25 };
	double o[4] = {3,5,1,2};
	int m = 4;
	double S = WealthOfGambler(p, b, o, m);
	
	printf("S = %f\r\n", S);

	return 0;
}
