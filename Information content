#include <stdio.h>
#include <math.h>

double InformationContent(double p) {
	return -log2(p);
}

int main() {
	double p[] = {0.1, 0.2, 0.7};
	double I;
	int i;
	int n = sizeof(p) / sizeof(double);

	for (i = 0;i < n; i++) {
		I = InformationContent(p[i]);
		printf("I = %f\r\n", I);
	}

	return 0;
}
