#include <stdio.h>


int main(void)
{
	int array[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int num_of_rows = 2, num_of_cols = 3;
	int *ptr = &array[0][0];

	for (int row = 0; row < num_of_rows; row++)
	{
		for (int col = 0; col < num_of_cols; col++)
		{
			printf("%d\t", *(ptr + row * num_of_cols + col));
		}
		printf("\n");
	}
	
	return (0);
}