#include<stdio.h>
#include<math.h>

double DoublingRate(double *p, double *b, double *o, int m) {
	double W = 0;
	int i = 0;
	
	for (i = 0; i < m; i++) {
		if (b[i] * o[i] == 0) continue;
		W += p[i] * log2(b[i] * o[i]);
	}

	return W;
}


int main() {
	double p[4] = {0.1, 0.2, 0.3, 0.4};
	double b[4] = {0.25, 0.25, 0.25, 0.25 };
	double o[4] = {3,5,1,2};
	int m = 4;
	double W = DoublingRate(p, b, o, m);

	printf("W = %f\r\n", W);

	return 0;
}


