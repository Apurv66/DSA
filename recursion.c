#include <stdio.h>
long int fact(int n);
int main()
{
	int n;
	long int f;
	printf("enter a number: ");
	scanf("%d", &n);
	f = fact(n);
	printf("factorial of %d: %d ", n, f);
	return 0;
}
long int fact(int n)
{
	if (n > 0)
	{
		return n * fact(n - 1);
	}
	else
	{
		return 1;
	}
}
