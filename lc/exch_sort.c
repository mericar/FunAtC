#include <stdio.h>

//
// The two functions below require the arrays to be pointed to for general use 
// 	due to scoping limitations.
//

// Prints out an array in a formmatted manner
void print_float_r(float r[], int size){
	printf("test\n");	
	for (int i = 0; i < size; i++){
		printf("%f\n", r[i]);
	}
}

// swaps the values of two Float values pointed at by some Float pointers 
void float_swap(float* i, float* j){
	float* temp;
	*temp = *i;
*i = *j;
	*j = *temp;
}

void sort_floats(float r[], int n){

	for(int i=0;i<n-1;i++){
		for(int j = i+1; j<n; j++){
			// looper
			if (r[i] > r[j]){
				float temp;
        			temp = r[i];
				r[i] = r[j];
				r[j] = temp;
			}
		}
	}
}



int main(){
	const int SIZE = 5;
	float arrof[SIZE] = { 1.8, 5.9, 3.5, 4.3, 2.3 };
	for (int i = 0; i < SIZE; i++){
                printf("%f\n", arrof[i]);
        }

	//add some space between the print outs:
	printf("\n\n");

	sort_floats(arrof, SIZE);

	for (int i = 0; i < SIZE; i++){
                printf("%f\n", arrof[i]);
        }

	return 0;
}
