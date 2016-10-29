#include "Item.h"

typedef struct Node* Link;

struct Node {
	Item item;
	Link next_node;
};

typedef struct {
	Link top;

} LinkStack;





