#include <stdio.h>

int main (void){
	char inName[64], outName[64];
	FILE *in, *out;
	int c;

	//retrieve the file names
	printf("Enter the file name to be copied: ");
	scanf("%63s", inName);
	printf("Enter the file name of the output file: ");
	scanf("%63s", outName);

	if ((in = fopen(inName, "r")) == NULL){
		printf("Can't open to read file %s.\n", inName);
		return 1;
	}

	if ((out = fopen(outName, "w") == NULL){
		printf("Can't open to write to file %s.\n", outName);
		return 2;
	}

	// copying portion
	while ((c = getc(in)) != EOF)
		putc(c,out);

	fclose(in);
	fclose(out);

	printf("file copied successfully\n");

	return 0;
}