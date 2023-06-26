#include <stdio.h>


int main(void)
{
	int array[50] = { 6, 2, 0, 4, 5 };
	//NOTE - inline declaration
	int size = 5, pos = 2;

	for (int i = 0; i <= size-1; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	
	for (int idx = pos-1; idx < size-1; idx++)
	{
		array[idx] = array[idx+1];
	}
	size--;

	for (int i = 0; i <= size-1; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	
	return (0);
}