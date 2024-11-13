#include <stdio.h>
int linear_search(int arr[], int x, int size);

int main()
{
	int arr[10] = {1, 11, 21, 31, 41, 51, 61, 71, 81, 91};
	int x;
	int size = 10;
	printf("Enter a value to search in array: ");
	scanf("%d", &x);
	int search = linear_search(arr, x, size);
	if (search == -1)
	{
		printf("%d is not found in array.", x);
	}
	else
	{
		printf("%d is found at index %d.", x, search);
	}
	return 0;
}
int linear_search(int arr[], int x, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}
