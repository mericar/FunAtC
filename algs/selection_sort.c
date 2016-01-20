#include <stdio.h>

void swap(int* i, int* j){
   	int t = *i;
   	*i = *j;
   	*j = t;
   }

void selection_sort(int a[], int l, int r){
	int i,j;
	for (int i = l; i < r; i++){
		int min = i;
		for (j = i+1; j <= r; j++){
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
}


int main() {

	int nums[] = {10,3,4,5,2,1,9,8,7,6};
	int len = 10;

	for (int i = 0; i < len; ++i)
	{
		printf("%d\n", nums[i]);
	}

	printf("%s\n", "break before sort");
	selection_sort(nums, 0, 9);
	printf("%s\n", "break after sort");

	for (int i = 0; i < len; ++i)
	{
		printf("%d\n", nums[i]);
	}

}

