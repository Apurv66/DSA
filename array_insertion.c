#include <stdio.h>
void arr_insert(int arr[], int size, int pos, int val);

int main()
{
	int arr[100], size, pos, val, i;
	printf("enter size of array: ");
	scanf("%d", &size);
	printf("enter %d array elements: ", size - 1);
	for (i = 0; i < size - 1; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter a value: ");
	scanf("%d", &val);
	printf("enter position to insert: ");
	scanf("%d", &pos);
	arr_insert(arr, size, pos, val);

	printf("array after insertion: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
void arr_insert(int arr[], int size, int pos, int val)
{
	int i = size - 1;
	while (i > pos)
	{
		arr[i] = arr[i - 1];
		i = i - 1;
	}
	arr[pos] = val;
}
