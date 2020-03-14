#include <stdio.h>
#include <math.h>

//H(X|Y)=H(X,Y)-H(Y)
double ConditionalEntropy(double **p, double *py, int Nx, int Ny) {
	double Ixy = 0;
	
	Ixy = JointEntropy(p, Nx, Ny) - Entropy(py, Ny);

	return Ixy;
}


int main() {
	double Pxy[][2] = {
		{0.1, 0.9},//X
		{0.2, 0.8} //Y
	};
	double *py = Pxy[1];

	int height = 2, width = 2;
	int i = 0;
	double **arr = (double**)malloc(sizeof(double*) * height);
	for (i = 0; i < height; i++) {
		arr[i] = (double*)malloc(sizeof(double) * width);
		memcpy(arr[i], Pxy[i], width*sizeof(double) );
	}
	
	double Hxy = ConditionalEntropy(arr, py, height, width);

	printf("Hxy = %f\r\n", Hxy);

	free(arr[0]);
	free(arr);
	return 0;
}
