#include <stdio.h>
#include <stdlib.h>

// Element node
typedef struct {
	char content;
	char* above;
	char* base;
} Node;

typedef struct {
	Node* top;
	Node* base;
	Node* (*push)(Node n, Node* np);
	Node* (*pop)(Node* np);
} Stack;


//top and bottom of stack
char top = "top";
char bottom = "bottom";

//Push node n onto the stack
Node* push(Node n, Node* np);

//Pop top node from the stack
Node* pop(Node* np);

