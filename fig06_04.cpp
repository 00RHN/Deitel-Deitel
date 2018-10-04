// Fig. 6.4: fig06_04.c
// Initializing the elements of an array with an intializer list.
#include<stdio.h>

int main(void)
{
	//use initializer list to initialize array n
	int n[5] = {32, 27, 64, 18, 95};
	
	printf("%s%13s\n", "Element", "Value");
	
	//output contents of array in tabular format
	for(size_t index = 0; index < 5; ++index){
		printf("%7u%13d\n", index, n[index]);
	}
	return 0;
}
