#include <stdio.h>


int main(void)
{
	int array[]	= { 6, 2, 1, 4, 5 };
	int *ptr = array;
	int size_of_array = 5;

	for (int idx = 0; idx < size_of_array; idx++)
	{
		printf("%d\t", ptr[idx]);
	}
	printf("\n");
	for (int idx = 0; idx < size_of_array; idx++)
	{
		printf("%d\t", *(ptr+idx));
	}
	

	return (0);
}