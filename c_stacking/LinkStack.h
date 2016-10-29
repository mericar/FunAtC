#include "Item.h"

typedef struct Node* Link;

struct Node {
	Item item;
	Link next_node;
};

typedef struct {
	Link top;
	int size;
	int max_size; 
} LinkStack;

Link NewNode(Item i);
LinkStack StackInit(int);
int StackIsEmpty(LinkStack*);
void StackPush(LinkStack*, Link);
Item StackPop(LinkStack*);






