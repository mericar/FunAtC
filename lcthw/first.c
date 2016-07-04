#include <stdio.h>

int main(int argc, char *argv[]){
	int i, j;
	j = 8;
	i = 8;
	int k = i*j;
	for (i=0; i<k; i++){
		for (j=0; j<k; j++ ){
			printf("%d ===>  ", j);
			printf("hello world too many times... ");
			printf("\n");
		}
	}
	puts("hello world the last time ... ");

	/* Warning: This program is wrong on purpose. */
	int age = 10;
	int height;
	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);
	return 0;
}


