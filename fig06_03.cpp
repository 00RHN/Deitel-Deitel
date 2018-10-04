// Fig. 6.3: fig06_03.c
// Initializing the elements of an array to zeros.
#include<stdio.h>
#include<stddef.h>

int main(void)
{
	int n[5]; //n is an array of five integers
	
	//set elements of array n to 0	
	for(size_t index = 0; index < 5; ++index)
	{
		n[index] = 0; //set element at location index to 0
	}
	
	printf("%s%13s\n", "Element", "Value");
	
	//output contents of array n in tabular format
	for(size_t index = 0; index < 5; ++index){
		printf("%7u%13d\n", index, n[index]);
	}
	return 0;
}
