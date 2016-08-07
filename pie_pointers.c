#include <stdio.h>

struct pie {
	int slices;
	void (*initialize)(struct pie*);
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


int main(){
	
	struct pie blueberry;
	blueberry.make_a_pie = make_pie(&blueberry);	
	blueberry.eat_some_pie = eat_pie;
	//struct pie peach

	int bl = blueberry.eat_some_pie(&blueberry);
	//int pl = peach.eat_pie(&peach);
	
	//printf("peach left: %i\n", pl);
	printf("blueberry left: %i\n", bl);

	return 0;
}
