#include <stdio.h>


int main(void)
{
	printf("\n");
    printf(" +---------------------------------------------------------------+\n");
    printf(" |                                                               |\n");
    printf(" |               Deletion of unsorted Array:                     |\n");
    printf(" |               At the end of the array.                        |\n");
    printf(" |                                                               |\n");
    printf(" +---------------------------------------------------------------+\n");
	printf("\n");

	int array[50], size_of_array;

	// size of array
	printf("Enter size of the array: ");
	scanf("%d", &size_of_array);

	// check if size of array is greater than 50 bytes or less than 1 byte
	if (size_of_array > 50 || size_of_array == 0)
	{
		printf("Invaild size\n");
	}
	else
	{
		// Accept the array elements
		printf("Enter elements of array: ");
		printf("\n==========================\n");
		for (int idx = 0; idx < size_of_array; idx++)
		{
			printf("index[%d]: ", idx + 1);
			scanf("%d", &array[idx]);
		}

		// print the array before deletion
		printf("Array before deletion");
		printf("\n==========================\n");
		for (int idx = 0; idx < size_of_array; idx++)
		{
			printf("%d\t", array[idx]);
		}
		printf("\n");

		// Delete elements of array at the end
		size_of_array--;

		// Print the array after deletion
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