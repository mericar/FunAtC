// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

int maxof3(int a, int b, int c) {
	if (a>b) {
		if (a>c) {
			return a;
		}
		else return c;
	}
	else if (b>c) {
		return b;
	}
	else return c;
}

int fac(int n) {
	if (n == 0) { return 1; }
	else { return n*fac(n - 1); }

}

int main() {
	int resultf;
	int a, b, c;
	a = 1;
    b = 2;
	c = 3;
	printf("Please enter a number from 1 to 10\n");
	scanf("%d\n", &resultf);
	printf("%d\n", fac(resultf));
	printf("%d",maxof3(a,b,c));
	return maxof3(a,b,c);

}

