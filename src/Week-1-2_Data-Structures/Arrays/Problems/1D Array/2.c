#include <stdio.h>


int main(void)
{
	/*
		SECTION - size of 1 array element x number of elements = size of whole array
		number of elements = size of whole array / size of 1 array element
	*/
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	//STUB - size of whole array / size of 1 array element
	int size_of_array = sizeof(a) / sizeof(a[0]);

	printf("%d\n", size_of_array);
	
	return (0);
}