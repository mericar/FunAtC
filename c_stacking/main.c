#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "Stack.h"

int main()
{
	Stack st = StackInit(1000);
	Item i2 = "H";
	Item i3 = "E";
	Item i6 = "L";
	Item i4 = "L";
	Item i5 = "O";
	Item* i1 = malloc(sizeof(Item));
	*i1 = "!";

	StackPush(&st, &i2);
	StackPush(&st, &i3);
	StackPush(&st, &i6);
	StackPush(&st, &i4);
	StackPush(&st, &i5);
	StackPush(&st, i1);

	printf("%s\n", StackPop(&st) );
	printf("%s\n", StackPop(&st) );
	printf("%s\n", StackPop(&st) );
	printf("%s\n", StackPop(&st) );
	printf("%s\n", StackPop(&st) );
	printf("%s\n", StackPop(&st) );
	return 0;
}


