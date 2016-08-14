#include <stdio.h>
#include <stdlib.h>



// returns a char pointer to an array of char pointers with size num_elements 
	char** make_char_array(int num_elements){
		char* a[num_elements];
		return a;
	}

// returns the number of chars allocated, and allocates memory for chars.
	int alloc_char_elem_size(char** e, int char_count, int char_array_index){
		e[char_array_index] = malloc(char_count*sizeof(char));
		return char_count;	
	}

//  add text to the specified char array and at some index
	void add_text(char** e, char* text, int char_array_index){
		e[char_array_index] = text;
	}

int main(){

	// New notepad: Playing with chars...
	//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

	int first_elem = 0;
	int string_count = 100;
	char** char_arr = make_char_array(string_count);
	int sz = alloc_char_elem_size(char_arr, 100, first_elem);
	char* fuzzy = "fuzzy wuzzy wasn't fuzzy, was he? ... ";
	
	// iterate over the char array, stop at the termination character.
	int i = 0;
	while(fuzzy[i] != '\0'){
		printf("%c\n", fuzzy[i]);
		++i;
	}
	add_text(char_arr, fuzzy, first_elem);
	
	printf("%c\n", char_arr[0][2] );
	printf("%s\n", char_arr[0] );


}
