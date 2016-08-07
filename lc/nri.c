#include <stdio.h>

float abs_value(float i){
	if(i < 0){ i = -i;}
	return i;
}

float square_rt(float i){
	const float epsilon = 0.01;
	float guess = 1.0;

	while(abs_value(guess * guess - i) >= epsilon){
		guess = (i / guess + guess) / 2.0;
	}

	return guess;
}

int main(){
	int big_array[2000000];
	
	for (int i=0; i<2000000; i++){
        	big_array[i]= i;
		printf("%i\n\n", i);
	}


	printf("square_rt (13.0) = %f\n", square_rt(13.0));
	while(1){
	
	}
	return 0;
}
