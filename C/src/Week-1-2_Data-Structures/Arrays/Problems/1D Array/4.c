#include <stdio.h>


int main(void)
{
	int array1[5], array2[5], sum_array[5];

	printf("Enter elements of first array:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("index[%d]: ", i+1);
		scanf("%d", &array1[i]);
	}

	printf("\nEnter elements of second array:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("index[%d]: ", i+1);
		scanf("%d", &array2[i]);
	}

	printf("\nSum of first and second array:\n");
	for (int i = 0; i < 5; i++)
	{
		sum_array[i] = array1[i] + array2[i];
		printf("%d\t", sum_array[i]);
	}
	printf("\n");
	
	return (0);
}