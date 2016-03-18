#include <stdbool.h>
#include <stdio.h>

bool resolution;

bool isPos(int i){
    (i >= 0) ? (resolution = true) : (resolution = false);
    return resolution;
}

int main(){

    int a,b;
    a = 1;
    b = -1;
    printf("Is a positive? ... %i\n", isPos(a));
    printf("Is b positive? ... %i\n", isPos(b));

    return 0;		
}
