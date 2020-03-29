#include<stdio.h>
#include<math.h>

double Entropy(double* p, int n) {
    int i = 0;
    double H = 0;

    for (i = 0; i < n; i++) {
        if (p[i] == 0) continue;
	H += p[i] * log2(p[i]);
    }

    return -H;
}


int main(){
    double p[2] = {0.5, 0.25};//1.5
    double h = Entropy(p, 2);

    printf("H=%f\r\n", h);

    return 0;
}

