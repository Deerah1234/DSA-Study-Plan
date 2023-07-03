#include <stdio.h>


int main() {
	printf("\n");
    printf(" +---------------------------------------------------------+\n");
    printf(" |                                                         |\n");
    printf(" |               Insection of unsorted Array               |\n");
    printf(" |                                                         |\n");
    printf(" +---------------------------------------------------------+\n");
	printf("\n");

	int array[50] = { 6, 2, 0, 4, 5 };
	int size = 5, pos = 3, num = 10;

	printf("\nArray before insertion:\n");
	printf("============================\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\nArray after insertion:\n");
	printf("============================\n");
	array[size] = array[pos-1];
	array[pos-1] = num;
	size++;

	for (int i = 0; i < size; i++)
	{
		// /t - tab i.e 4 space before the next element
		printf("%d\t", array[i]);
	}
	printf("\nsize: %d\n", size);
}