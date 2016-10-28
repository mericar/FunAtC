#include "Item.h"

typedef struct {
	Item* items;
	int max_size;
	int size;
} Stack;

Stack StackInit(int);
int StackIsEmpty(Stack*);
void StackPush(Stack*, Item*);
Item StackPop(Stack*);
