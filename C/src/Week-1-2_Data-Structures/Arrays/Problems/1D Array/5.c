#include <stdio.h>


int main(void)
{
	int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5};

	int size_of_arr = sizeof(arr) / sizeof(arr[0]);

	int temp[size_of_arr], j = 0;

	for (int i = 0; i < size_of_arr-1; i++)
	{
		if (arr[i] != arr[i+1])
		{
			temp[j++] = arr[i];
		}
	}

	temp[j++] = arr[size_of_arr-1];

	printf("Original Array:\n");
	for (int i = 0; i < size_of_arr; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");

	printf("Array after removing duplicates:\n");
	for (int i = 0; i < j; i++)
	{
		printf("%d\t", temp[i]);
	}
	printf("\n");
	
	return (0);
}