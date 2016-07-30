#include <stdio.h>

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
	for (int i = 0; i < length-1; i++){
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


int main() {

	int nums[] = {10,3,4,5,2,1,9,8,7,6};
	int len = 10;

	for (int i = 0; i < len; ++i){
		printf("%d  ", nums[i]);
	}

	printf("\n");

	printf("%s\n", " before sort executes\n");
	selection_sort(nums, 9);
	printf("%s\n", " after sort executes\n");

	for (int i = 0; i < len; ++i){
		printf("%d  ", nums[i]);		
	}

	printf("\n");
}

