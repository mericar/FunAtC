#include <stdio.h>
#include <stdlib.h>

//PURPOSE: Visualize sorting algs.

// REQS: Use a 2D Array filled with chars to represent the size of the value to be sorted.
//      y-axis is size of element, x is the element's position (larger, smaller)


const char UNIT = 'o';
const char BLANK = ' ';




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
    // TODO: change mtx_cols to max int in array (within reason ...)
    int mtx_cols = r->length;
    printf("%i\n", r->length);
    char m[mtx_rows][mtx_cols];
    populate_matrix(mtx_rows,mtx_cols, m, r->array, UNIT, BLANK);
    display_matrix(mtx_rows,mtx_cols, m);
    
}


int main(){
    
    int an_r[10] = {1,2,3,4,5,10,9,8,7,6};
    struct ray list_of_int;
    init_ray(10, &list_of_int);
    for (int k=0; k < list_of_int.length; k++) {
        list_of_int.array[k] = an_r[k];
    }
    
    for (int k=0; k < list_of_int.length; k++) {
        printf("%c\n", list_of_int.array[k]);
    }
    
    
    //test
    ray_of_ints_to_matrix_picture(&list_of_int);
    
    
    return 0;
    
}