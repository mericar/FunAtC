// in C we can use multidimensional arrays to represent matrices:
#include <stdio.h>
#define ROWS 4
#define COLS 4

void print4by4Matrix(int array[ROWS][COLS]){
    for (int i=0; i<ROWS; i++){
        for (int j=0; j<COLS; j++){
            printf("%d ", array[i][j]);    
        }
    printf("\n");
    }   
}

int main(){
   int m[ROWS][COLS] = {
         {1, 0, 0, 0},
         {0, 1, 0, 0},
         {0, 0, 1, 0},
         {0, 0, 0, 1}
        };
    printf("eye matrix m: \n");
    print4by4Matrix(m);
    return 0;
};

