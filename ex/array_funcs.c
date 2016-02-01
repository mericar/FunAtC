
//
//  array_funcs.c
//  cplay
//
//  Created by M on 2016-01-31.
//  Copyright © 2016 mec. All rights reserved.
//

#include "array_funcs.h"

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


SizedArray * make_sized_array(int size){
    SizedArray *sa = malloc(sizeof(SizedArray));
    sa->array = (int *) malloc(size * sizeof(int));
    sa->size = size;
    return sa;
}

void push_int(int a, int *b){
    printf("int to be replaced: %d\n", *b);
    *b = a;
    printf("int inserted: %d\n", *b);
}

// Returns true if given int is contained within the given array
bool does_contain(int a, int *b){
    return false;
}

//  Takes an int as argument, returns a pointer to a new array
//      containing a dictionary pointing to all values and their
//      index in their extracted array.
int* pull_all_int(int a, int *b);

// Takes some index of an array and replaces the existing value with zero
int* zero_index(int* a);

