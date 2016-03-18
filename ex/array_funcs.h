//
//  array_funcs.h
//  cplay
//
//  Created by M on 2016-01-31.
//  Copyright © 2016 mec. All rights reserved.
//

#ifndef array_funcs_h
#define array_funcs_h

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


// DictEntry Struct
typedef struct {
    int *key;
    int val;
} DictEntry;


// Array Struct
typedef struct {
    int *array;
    int size;
} SizedArray;

// Makes an array of some size
SizedArray * make_sized_array(int size);

// Pushes an int to a given index of an int array
void push_int(int a, int *b);

// Returns true if given int is contained within the given array
bool does_contain(int a, SizedArray *sa);

//  Takes an int as argument, returns a pointer to a new array
//      containing a dictionary pointing to all values and their
//      index in their extracted array.
DictEntry* pull_all_int(int a, SizedArray *sa);

// Takes some index of an array and replaces the existing value with zero
void zero_index(int* a);
