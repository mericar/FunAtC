
//
//  main.c
//  cplay
//
//  Created by M on 2016-01-30.
//  Copyright © 2016 mec. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <pthread.h>

#include "array_funcs.h"


// MAIN
int main(int argc, const char * argv[]) {
    
    int arr[100];
    for (int j=50; j<100; j++) {
        arr[j] = j;
        printf("the value at the jth index, %d, is %d\n\n", arr[j], arr[j]);
    }
    
    for (int i=0; i<6; i++) {
        push_int(i, &arr[i]);
    }
    
    
    printf("Hello, World!\n");
    SizedArray *sa1 = make_sized_array(1000);
    printf("%d\n", sa1->size);
    
    push_int(1, sa1->array);
    
    for (int k=0; k < sa1->size; k++) {
        push_int(k, &(sa1->array)[k]);
    }
   
    return 0;
}
