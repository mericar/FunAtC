#include <stdio.h>
// Here we have a "struct pie" type.
//Well, what do we do with the struct pie type?
// DO WE EAT THE STRUCT PIE? ... Maybe ... But here we are using it for the good of a tangible example:

// struct pie contains a member of type int called "slices";
// 	 ...  and three other members that are function pointers.
// The function pointers are  described in English as follows:
// 	->  "initialize" is a pointer to a function that takes a struct pie as a parameter, and returns void.
//      ->  "make_a_pie" is a pointer to a function that takes a struct pie as a parameter, and returns an int.
//	->  "eat_some_pie" is a pointer to a function that takes a struct pie as a parameter, and returns an int.
struct pie {
	char[] pie_type;
	int slices;
	int (*make_a_pie)(struct pie*);
	int (*eat_some_pie)(struct pie*);
};

int slices_left(struct pie* p){
	return p->slices;
}

int make_pie(struct pie* p){
	p->slices = 8;
	return p->slices;
}

int eat_pie(struct pie* p){
	if (p->slices > 0){
		p->slices--;
		printf("there are %i pieces of pie left ...\n", p->slices );
	}
	printf("No more pie !!!\n");
	return p->slices;	
}
struct pie* pie_generator(struct pie* the_pie) {
	the_pie->make_a_pie = make_pie(the_pie);
	return the_pie;
}

int main(){
	
	struct pie* peach = malloc(sizeof(struct pie));
	peach->make_a_pie = make_pie(peach);
	peach->eat_some_pie = eat_pie;	

	struct pie blueberry;
	blueberry.make_a_pie = make_pie(&blueberry);	
	blueberry.eat_some_pie = eat_pie;
	

	int bl = blueberry.eat_some_pie(&blueberry);
	int pl = peach->eat_some_pie(peach);
	
	printf("peach left: %i\n", pl);
	printf("blueberry left: %i\n", bl);

	return 0;
}


