#include <stdlib.h>
#include "Item.h"
#include "LinkStack.h"

Node NewNode(Item i) {
	Link l = malloc(sizeof(*Link));
	l->item = i;
	l->next_node = NULL;
	return *l;
}

LinkStack LStackInit(int max) {
	LinkStack* ls = malloc(sizeof(LinkStack));
	ls->top = NULL;
	ls->max_size = max;
	return *ls;
}

int LStackIsEmpty(LinkStack* ls){
	return *ls == NULL;
}

void LStackPush(LinkStack* ls, Link l){
	if( ls->size < ls->max_size){
		ls->top->next_node = l;
		ls->top = l;
	}
	else{
		printf("\nThe Stack has exceeded it's designated maximum size.\n" );
	}
}

Item LStackPop(LinkStack* ls){
	// TODO
	return void*;
}