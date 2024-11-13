#include <stdio.h>
#define size 5
int top = -1;
void push(int s[], int x);
int pop(int s[]);
void display(int s[]);

int main()
{
	int s[size], x, y;
	int choice;
	do
	{
		printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("enter value to insert: ");
			scanf("%d", &x);
			push(s, x);
			break;
		case 2:
			y = pop(s);
			if (y != 0)
			{
				printf("%d was poped.\n", y);
			}
			break;
		case 3:
			display(s);
			break;
		case 4:
			break;
		default:
			printf("invalid choice..!!\n");
		}
	} while (choice != 4);
	return 0;
}
void push(int s[], int x)
{
	if (top >= size - 1)
	{
		printf("Stack overflow..!!\n");
	}
	else
	{
		top = top + 1;
		s[top] = x;
	}
}
int pop(int s[])
{
	int x;
	if (top < 0)
	{
		printf("Stack underflow..!!\n");
	}
	else
	{
		x = s[top];
		top = top - 1;
		return x;
	}
}
void display(int s[])
{
	int i;
	for (i = 0; i <= top; i++)
	{
		printf("%d ", s[i]);
	}
}
