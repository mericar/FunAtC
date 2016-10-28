#include <stdio.h>
#include <stdlib.h>

//PURPOSE: Visualize sorting algs.
// REQS: Use a 2D Array filled with chars to represent the size of the value to be sorted.
//      y-axis is size of element, x is the element's position (larger, smaller)


const char UNIT = 'o';
const char BLANK = ' ';


/*
 * Selection Sort is added here for demonstrating the use cases of the visualiser
 *
 */

// Does a swap ... takes an int pointer i, and j.
// creates a temporary variable t, stores the value pointed to by i.
// the value pointed to by i is assigned the value pointed to by j
// the value pointed to by j is assigned t, the temp variable storing
//	the now gone prior value pointed to by i
void swap(int* i, int* j){
   	int t = *i;
   	*i = *j;
   	*j = t;
}

// Time Complexity for avg, best, and worst cases: O(n^2)
//Params: takes an int array, and array length.
// LOOP:
// Loops over array length - 1 times.
// In each iteration, min is assigned i.
// another loops iterates through the remaining indices,
//	storing the index representing the minimum value (some j index)
// After the minimum value index has been discovered, and the minimum index isn't equal to the j index,
//	we swap the values using our swap function above.
// and GOTO LOOP above ^
void selection_sort(int a[], int length){
    int i,j;
    for (i = 0; i < length-1; i++){
        int min_index = i;
        for (j = i+1; j <= length; j++){
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if(min_index != j){
            swap(&a[i], &a[min_index]);
        }
    }
}


struct ray {
    int length;
    int* array;
};
//struct containing array with length of the array, and initialization func pointer:
void init_ray(int len, struct ray* r){
    r->array = malloc(len*sizeof(int));
    r->length = len;
}



// Displays a rows x cols matrix
void display_matrix(int rows, int cols, char mtx[rows][cols]){
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%5c", mtx[row][col]);
        }
        printf("\n\n\n");
    }
}


void populate_matrix(int rows, int cols, char m[rows][cols], int* a, char is, char isnot){
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols ; col++) {
            //if the column is <= the array's int value:
            if (col < a[row]) {
                m[row][col] = is;
            }else{
                m[row][col] = isnot;
            }
        }
    }
}

//convert the ray to the matrix visualisation
void ray_of_ints_to_matrix_picture(struct ray* r){
    int mtx_rows = r->length;
    // TODO: perhaps change mtx_cols to max int in array (within reason ... ?)
    int mtx_cols = r->length;
    printf("%i\n", r->length);
    char m[mtx_rows][mtx_cols];
    populate_matrix(mtx_rows,mtx_cols, m, r->array, UNIT, BLANK);
    display_matrix(mtx_rows,mtx_cols, m);
    
}


int main(){
    
    int an_r[20] = {20, 1, 18, 2, 16, 3, 15, 4, 13, 19, 5, 12, 6, 11, 10, 7, 17, 8, 9, 14};
    struct ray list_of_int;
    init_ray(20, &list_of_int);
    for (int k=0; k < list_of_int.length; k++) {
        list_of_int.array[k] = an_r[k];
    }
    
    for (int k=0; k < list_of_int.length; k++) {
        printf("%c\n", list_of_int.array[k]);
    }
    
    
    //test
    ray_of_ints_to_matrix_picture(&list_of_int);
   // selection_sort(list_of_int.array, list_of_int.length);
    int length = list_of_int.length;
    int i,j;
    for (i = 0; i < length-1; i++){
        int min_index = i;
        for (j = i+1; j <= length; j++){
            if ((list_of_int.array)[j] < (list_of_int.array)[min_index]) {
                min_index = j;
           }
        }
        if(min_index != j){
            swap(&(list_of_int.array)[i], &(list_of_int.array)[min_index]);
        }
	ray_of_ints_to_matrix_picture(&list_of_int);
        sleep(1);
    }

    return 0;
}
