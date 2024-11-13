#include <stdio.h>

void showArr(int a[], int n);
void bubble_sort(int a[], int n);

int main()
{
	int a[7] = {30, 20, 50, 60, 70, 40, 10}, n = 7;
	showArr(a, n);
	bubble_sort(a, n);
	showArr(a, n);
	return 0;
}

void showArr(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void bubble_sort(int a[], int n)
{
	int i, j, temp;
	int exch = 0;
	for (i = 0; i < n - 1; i++)
	{
		exch = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				exch++;
			}
		}
		if (exch == 0)
		{
			return;
		}
	}
}
