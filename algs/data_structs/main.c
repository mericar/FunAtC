#include <stdio.h>
#include <math.h>
#include "Num.h"

int main(int argc, char * argv[]){

	int i;
	int N = atoi(argv[1]);
	float m1 = 0.0;
	float m2 = 0.0;
	Number x;
	
	for (i = 0; i < N; i++){
		x = randNum();
		m1 += ( (float) x )/N;
		m2 += ( (float) x*x)/N;
	}
	double sdev;
	sdev = sqrt(m2-m1*m1);
	printf("	Average: %f\n", m1);
	printf(" Std. Deviation: %f\n", sdev);
	return 0;
}


