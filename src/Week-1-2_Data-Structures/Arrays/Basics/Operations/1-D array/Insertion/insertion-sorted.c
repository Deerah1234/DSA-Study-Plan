#include <stdio.h>


int main() {
	printf("\n");
    printf(" +-------------------------------------------------------+\n");
    printf(" |                                                       |\n");
    printf(" |               Insection of sorted Array               |\n");
    printf(" |                                                       |\n");
    printf(" +-------------------------------------------------------+\n");
	printf("\n");
	
	int array[50] = { 6, 2, 0, 4, 5 };
	//NOTE - inline declaration
	int size = 5, pos = 3, num = 10;

	printf("\nArray before insertion:\n");
	printf("============================\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\nArray after insertion:\n");
	printf("============================\n");
	for (int i = size-1; i >= pos-1; i--)
	{
		array[i + 1] = array[i];
	}
	array[pos - 1] = num;
	size++;

	for (int i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\nsize: %d\n", size);
}