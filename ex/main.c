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
    
    printf("does contain the number 1? %d\n", does_contain(1, sa1));
    
    SizedArray *sa2 = make_sized_array(10);
    for (int k=0; k < sa2->size; k++) {
        push_int(5, &(sa2->array)[k]);
    }
    DictEntry *entry = pull_all_int(5, sa2);
    printf("\n %p \n", entry[0].key );
    printf("\n %d \n", entry[0].val );
    printf("\n %p \n", entry[1].key );
    printf("\n %d \n", entry[1].val );
    printf("\n %p \n", entry[2].key );
    printf("\n %d \n", entry[2].val );
    printf("\nkey: %p ... value: %d  \n\n", entry->key, entry->val);
    
   
    return 0;
}
 
