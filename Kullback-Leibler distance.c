#include <stdio.h>
#include <math.h>

double KullbackLeibler(double* p, double* q, int n) {
	double D=0;
	int i = 0;

	for (i = 0; i < n; i++) {
		if (p[i] == 0) continue;
		D += p[i] * log2(p[i]/q[i]);
	}

	return D;
}

int main() {
	double x[4] = {0.1, 0.2, 0.3, 0.4};
	double y[4] = {0.25, 0.25, 0.25, 0.25 };
	double D = KullbackLeibler(x, y, 4);

	printf("D=%f\r\n", D);

	return 0;
}
