#include <stdio.h>
#include <stdbool.h>

// global and func defs here
float averages[1000];

// main func here

int main(){
    for (int i = 0; i < 1000; i++){
        averages[i] = 0;
        printf("element %d contains float: %f in the averages array.\n", i, averages[i]);
    }   
 
    return 0;    
}

