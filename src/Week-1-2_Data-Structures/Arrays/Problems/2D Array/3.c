#include <stdio.h>


int main(void)
{
	int matrix[2][3], matrix2[3][2];

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

	printf("\nThe Transpose of the matrix is:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matrix2[i][j] = matrix[j][i];
			printf("%d\t", matrix2[i][j]);
		}
		printf("\n");
	}

	return (0);
}