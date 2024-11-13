#include <stdio.h>
char *str_cat(char a[], char b[], char c[]);

int main()
{
	char a[20], b[20], c[40];
	printf("enter first string: ");
	gets(a);
	printf("enter second string: ");
	gets(b);
	str_cat(a, b, c);
	puts(c);
	return 0;
}
char *str_cat(char a[], char b[], char c[])
{
	int i = 0, j = 0;
	while (a[i] != '\0')
	{
		c[i] = a[i];
		i++;
	}
	while (b[j] != '\0')
	{
		c[i + j] = b[j];
		j++;
	}
	c[i + j] = '\0';
}
