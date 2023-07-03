#include <stdio.h>


int main(void)
{
	int marks[5];
	float sum = 0, avg;

	printf("Enter 5 marks of student:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Student%d: ", i+1);
		scanf("%d", &marks[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}
	avg = sum / 5;
	printf("\n");

	printf("Sum of students: %f\n", sum);
	printf("Average of students: %f\n", avg);
	
	return (0);
}