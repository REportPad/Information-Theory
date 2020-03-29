#include<stdio.h>
#include<math.h>

double JointEntropy(double **p, int Nx, int Ny) {
	int i = 0, j = 0;
	double H = 0;

	for (i = 0; i < Nx; i++) {
		for (j = 0; j < Ny; j++) {
			if (p[i][j] == 0) continue;
			H += p[i][j] * log2(p[i][j]);
		}
	}

	return -H;
}


int main() {
	double Pxy[][2] = {
		{0.1, 0.9},//X
		{0.2, 0.8} //Y
	};

	int height = 2, width = 2;
	int i = 0;
	double **arr = (double**)malloc(sizeof(double*) * height);
	for (i = 0; i < height; i++) {
		arr[i] = (double*)malloc(sizeof(double) * width);
		memcpy(arr[i], Pxy[i], width*sizeof(double) );
	}
	
	double H = JointEntropy(arr, height, width);

	printf("H = %f\r\n", H);

	free(arr[0]);
	free(arr);
	return 0;
}
