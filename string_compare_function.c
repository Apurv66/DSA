#include <stdio.h>
int str_cmp(char a[], char b[]);

int main()
{
	char a[20];
	char b[20];
	int ans;
	printf("enter first string: ");
	gets(a);
	printf("enter second string: ");
	gets(b);
	ans = str_cmp(a, b);
	printf("%d ", ans);
	if (ans == 0)
	{
		printf("both strings are equal.");
	}
	else if (ans > 0)
	{
		printf("a is alphabeticaly behind than b");
	}
	else
	{
		printf("a is alphabeticaly ahead than b");
	}
	return 0;
}
int str_cmp(char a[], char b[])
{
	int i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			break;
		}
		i = i + 1;
	}
	return a[i] - b[i];
}
