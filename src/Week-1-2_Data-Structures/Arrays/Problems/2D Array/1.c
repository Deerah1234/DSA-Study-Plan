#include <stdio.h>


int main(void)
{
	int matrix[2][3], sum_matrix = 0;

	printf("Enter elements of matrix:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("index[%d][%d]: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}	
	}

	printf("Elements of matrix:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum_matrix += matrix[i][j];
		}
	}
	printf("\n");

	printf("Sum of matrix: %d\n", sum_matrix);
	return (0);
}