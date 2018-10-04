// Fig. 6.5: fig06_05.c
// Initializing the elements of array s to the even integers from 2 to 10.
#include<stdio.h>
#include<stddef.h>
#define SIZE 5 // maximum size of array

int main(void)
{
	// symbolic constant SIZE can be used to specify array size
	int s[SIZE]; // array s has SIZE elements
	
	for(size_t counter = 0; counter < SIZE; ++counter){
		s[counter] = 2 + 2 * counter;
	}
	
	printf("%s%13s\n", "Element", "Value");
	
	// output contents of array s in tabular format
	for(size_t counter = 0; counter < SIZE; ++counter){
		printf("%7u%13d\n", counter, s[counter]);
	}
	return 0;
}


