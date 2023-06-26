#include <stdio.h>


int main(void)
{
	printf("\n");
    printf(" +---------------------------------------------------------+\n");
    printf(" |                                                         |\n");
    printf(" |               deletion of unsorted Array                |\n");
    printf(" |                                                         |\n");
    printf(" +---------------------------------------------------------+\n");
	printf("\n");

	int array[50], size_the_array, pos;

	// size of the array
	printf("Enter size of array: ");
	scanf("%d", &size_the_array);

	// initialize the array
	if (size_the_array > 50 || size_the_array == 0) 
	{
		printf("invalid size\n");
	} 
	else 
	{
		for (int i = 0; i < size_the_array; i++)
		{
			printf("index[%d]: ", i + 1);
			scanf("%d", &array[i]);
		}

		// print the array before the deletion
		printf("Array before deletion: \n");
		printf("===================== \n");
		for (int i = 0; i <= size_the_array-1; i++)
		{
			printf("%d\t", array[i]);
		}
		printf("\n");

		// position of the arrary to delete
		printf("Enter position to delete: ");
		scanf("%d", &pos);

		// check position
		if (pos >= size_the_array || pos <= 0) 
		{
			printf("invalid position\n");
		}
		else 
		{
			// delete the element at specified position of unsorted array
			array[pos-1] = array[size_the_array-1];
			size_the_array--;

			// print the array after deletion
			printf("Array after deletion: \n");
			printf("===================== \n");
			for (int i = 0; i <= size_the_array-1; i++)
			{
				printf("%d\t", array[i]);
			}
			printf("\n");
		}
	}
	
	return (0);
}
