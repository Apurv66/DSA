#include <stdio.h>

void showArr(int a[], int n);
void insertion_sort(int a[], int n);

int main()
{
    int a[7] = {30, 20, 50, 60, 70, 40, 10}, n = 7;
    showArr(a, n);
    insertion_sort(a, n);
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

void insertion_sort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (key < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}