#include <stdio.h>

#define ARRAY_LEN 20

int square(int i) {
    return i*i;
}

int times_two(int i) {
    return 2*i;
}

int cube(int i){
    return i*i*i;
}

void map(int array[], size_t len, int (*map_func)(int)) {
    size_t i = 0;
    for(; i < len; ++i)
        array[i] = map_func(array[i]);
}

int main() {
    
    int array[ARRAY_LEN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    map(array, ARRAY_LEN, &times_two);
    map(array, ARRAY_LEN, &square);
    map(array, ARRAY_LEN, &cube);

    size_t i = 0;
    for (; i < ARRAY_LEN; ++i)
        printf("%d \n", array[i]);

    return 0;
}
