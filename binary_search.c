#include <stdio.h>
int binary_search(int arr[], int x);

int main()
{
	int arr[10] = {12, 20, 23, 28, 34, 54, 56, 61, 64, 71};
	int x;
	printf("Enter a value to search in array: ");
	scanf("%d", &x);
	int search = binary_search(arr, x);
	if (search == -1)
	{
		printf("%d is not found in array.", x);
	}
	else
	{
		printf("%d was found at index %d.\n", x, search);
	}
	return 0;
}

int binary_search(int arr[], int x)
{
	int high = 9, mid, low = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == x)
		{
			return mid;
		}
		else if (arr[mid] < x)
		{
			low = mid + 1;
		}
		else if (arr[mid] > x)
		{
			high = mid - 1;
		}
	}
	return -1;
}
