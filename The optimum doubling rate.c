#include <stdio.h>
#include <math.h>

double OptimumDoublingRate(double *p, double *o, int n) {
	double W = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		if (o[i] == 0) continue;
		W += p[i] * log2(o[i]);
	}

	W -= Entropy(p, n);
	return W;
}


int main() {
	double p[4] = {0.1, 0.2, 0.3, 0.4};
	double o[4] = {3,5,1,2};
	int m = 4;
	double W = OptimumDoublingRate(p, o, m);
	
	printf("W = %f\r\n", W);

	return 0;
}
