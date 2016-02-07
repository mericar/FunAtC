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


void push_dict_entry(DictEntry de, DictEntry *a){
    *a = de;
}


void push_int(int a, int *b){
    printf("int to be replaced: %d\n", *b);
    *b = a;
    printf("int inserted: %d\n", *b);
}


// Returns true if given int is contained within the given array
bool does_contain(int a, SizedArray *sa){
    for (int k=0; k < sa->size; k++) {
        if ((sa->array)[k] == a) {
            return true;
        }
    }
    return false;
}

//  Takes an int as argument, returns a pointer to a new array
//      containing a dictionary pointing to all values and their
//      index in their extracted array.
DictEntry* pull_all_int(int a, SizedArray *sa) {
    
    int count;
    for (int k=0; k < sa->size; k++){
        if ((sa->array)[k] == a) {
            count++;
        }
    }
    
    DictEntry *dictionary = (DictEntry *) malloc(count * sizeof(DictEntry));
    int incr = 0;
    
    for (int k=0; k < sa->size; k++){
        if ((sa->array)[k] == a) {
            DictEntry *de = malloc(sizeof(DictEntry));
            de->key = &(sa->array)[k];
            de->val = a;
            push_dict_entry(*de, &dictionary[incr]);
            incr++;
        }
    }
    return dictionary;
    
}

// Takes some index of an array and replaces the existing value with zero
int* zero_index(int* a);


