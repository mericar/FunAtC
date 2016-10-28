#include <stdlib.h>
#include "Item.h"
#include "Stack.h"

Stack StackInit(int max){
	Stack* s = malloc(sizeof(Stack));
	Item ia[max];
	s->items = ia;
	s->max_size = max;
	s->size = 0;
	return *s;
}

int StackIsEmpty(Stack* s){
	return s->size == 0;
}

void StackPush(Stack* s, Item* i){
	s->items[(s->size)++] = *i;
}

Item StackPop(Stack* s) {
	return s->items[--(s->size)];
}





