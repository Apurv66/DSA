#include <stdio.h>
void arr_delete(int a[], int size, int pos);

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = 10;
	int pos = 3, i;
	arr_delete(a, size, pos);
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
void arr_delete(int a[], int size, int pos)
{
	int i = pos;
	while (i < size - 1)
	{
		a[i] = a[i + 1];
		i = i + 1;
	}
}
