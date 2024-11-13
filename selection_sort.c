#include <stdio.h>

void showArr(int a[], int n);
void selection_sort(int a[], int n);

int main()
{
    int a[7] = {30, 20, 50, 60, 70, 40, 10}, n = 7;
    showArr(a, n);
    selection_sort(a, n);
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

void selection_sort(int a[], int n)
{
    int i, j, temp;
    int indexOfMin;
    for (i = 0; i <= n - 1; i++)
    {
        indexOfMin = i;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[indexOfMin] > a[j])
            {
                indexOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}