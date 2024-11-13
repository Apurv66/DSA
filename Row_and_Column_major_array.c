#include <stdio.h>
#define row 2
#define col 4

int main()
{
	int a[row][col], i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("enter a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Row major array: ");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("\nColumn major array: ");
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			printf("%d ", a[i][j]);
		}
	}

	return 0;
}
