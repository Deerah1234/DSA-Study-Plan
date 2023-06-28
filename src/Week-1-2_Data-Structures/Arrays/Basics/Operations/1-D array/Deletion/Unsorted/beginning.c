#include <stdio.h>


int main(void)
{
	printf("\n");
    printf(" +-------------------------------------------------------------+\n");
    printf(" |                                                             |\n");
    printf(" |               Deletion of sorted Array:                     |\n");
    printf(" |               At the Beginning of the array.                |\n");
    printf(" |                                                             |\n");
    printf(" +-------------------------------------------------------------+\n");
	printf("\n");

	int array[50], size_of_array;

	printf("Enter size of the array: ");
	scanf("%d", &size_of_array);

	if (size_of_array > 50 || size_of_array == 0)
	{
		printf("Invaild size\n");
	}
	else
	{
		printf("Enter elements of array: ");
		printf("\n==========================\n");
		for (int idx = 0; idx < size_of_array; idx++)
		{
			printf("index[%d]: ", idx + 1);
			scanf("%d", &array[idx]);
		}

		printf("Array before deletion");
		printf("\n==========================\n");
		for (int idx = 0; idx < size_of_array; idx++)
		{
			printf("%d\t", array[idx]);
		}
		printf("\n");

		// Deletion of elements at the beginning of an unsorted array
		array[0] = array[size_of_array - 1];
		size_of_array--;

		// Print array after deletion
		printf("Array after deletion");
		printf("\n==========================\n");
		for (int idx = 0; idx < size_of_array; idx++)
		{
			printf("%d\t", array[idx]);
		}
		printf("\n");

	}
	
	return (0);
}