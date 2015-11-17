
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// what we are doing here is modeling 
//    polymorphism in C


// struct Animal_class defines a general toString 
//      procedure pointer  
struct Animal_class{
	void* super;
	void (*toString) (void* this, char* buf, int bufSize);
};
// Struct to model our person class
struct Animal {
	struct Animal_class* class;
	char* name;
};
// Person toString procedure
void Animal_toString (void* thisv, char* buf, int bufSize){
	struct Animal* this = thisv;
	snprintf(buf, bufSize, "name: %s", this->name);

}

// Create the class object
struct Animal_class Animal_class_obj = {NULL, Animal_toString};


// This is the procedure that instantiates
//        our "new" instances of the Animal class
struct Animal* new_Animal(char* name) {
	struct Animal* this = malloc(sizeof(struct Animal));
	this->class = &Animal_class_obj;
	this->name = strdup(name);
	return this;
}

struct Animal_class {
  struct Animal_class* super;
  void  (*toString) (void* this, char* buf, int bufSize);
};

struct Dog{
  struct Dog_class* class;
  char* name;
  int   id;
};

void Dog_toString(void* thisv, char* buf, int bufSize){
	struct Dog* this = thisv;
	char super[100];
	this->class->super->toString(this, super, sizeof(super));
    snprintf (buf, bufSize, "%s, SID: %d", super, this->id);
}

struct Dog_class* Dog_class_obj = {&Animal_class_obj, Dog_toString};


struct Dog* new_Dog(char* name, int id){
	struct Dog* this = malloc (sizeof (struct Dog));
	this->class = &Dog_class_obj;
	this->name = strdup(name);
	this->id = id;
	return this;
}
























