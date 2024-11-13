#include <stdio.h>
#include <stdlib.h>
#define n 5
int f = -1, r = -1;
void qinsert(int q[], int x);
int qdelete(int q[]);
void display(int q[]);
int main()
{
    int q[n], x, choice, y;
    while (1)
    {
        printf("\n1. Qinsert\n2. Qdelete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a value to insert: ");
            scanf("%d", &x);
            qinsert(q, x);
            break;
        case 2:
            y = qdelete(q);
            if (y != -1)
            {
                printf("Deleted value: %d\n", y);
            }
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice..!!\n");
        }
    }
    return 0;
}
void qinsert(int q[], int x)
{
    if (r >= n - 1)
    {
        printf("Queue overflow..!!\n");
    }
    else
    {
        r = r + 1;
        q[r] = x;
        if (f == -1)
        {
            f = 0;
        }
    }
}

int qdelete(int q[])
{
    int y;
    if (f == -1)
    {
        printf("Queue underflow..!!\n");
        return -1;
    }
    else
    {
        y = q[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = f + 1;
        }
        return y;
    }
}

void display(int q[])
{
    int i;
    if (r == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}
