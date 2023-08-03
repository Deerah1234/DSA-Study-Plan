#include <stdio.h>


int main(void)
{
	printf("\n");
    printf(" +----------------------------------------------------------+\n");
    printf(" |                                                          |\n");
    printf(" |               Deletion of unsorted Array:                |\n");
    printf(" |               At specific positon.                       |\n");
    printf(" |                                                          |\n");
    printf(" +----------------------------------------------------------+\n");
	printf("\n");

	int array[50], size_of_array, pos;

	// size of the array
	printf("Enter size of array: ");
	scanf("%d", &size_of_array);

	// initialize the array
	if (size_of_array > 50 || size_of_array == 0) 
	{
		printf("invalid size\n");
	} 
	else 
	{
		for (int i = 0; i < size_of_array; i++)
		{
			printf("index[%d]: ", i + 1);
			scanf("%d", &array[i]);
		}

		// print the array before the deletion
		printf("Array before deletion: \n");
		printf("===================== \n");
		for (int i = 0; i <= size_of_array-1; i++)
		{
			printf("%d\t", array[i]);
		}
		printf("\n");

		// position of the arrary to delete
		printf("Enter position to delete: ");
		scanf("%d", &pos);

		// check position
		if (pos >= size_of_array || pos <= 0) 
		{
			printf("invalid position\n");
		}
		else 
		{
			// delete the element at specified position of unsorted array
			array[pos-1] = array[size_of_array-1];
			size_of_array--;

			// print the array after deletion
			printf("Array after deletion: \n");
			printf("===================== \n");
			for (int i = 0; i <= size_of_array-1; i++)
			{
				printf("%d\t", array[i]);
			}
			printf("\n");
		}
	}
	
	return (0);
}
