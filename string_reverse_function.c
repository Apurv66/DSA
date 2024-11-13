#include <stdio.h>
void str_rev(char str[], char rev[]);

int main()
{
	char str[20];
	char rev[20];
	printf("enter a string: ");
	gets(str);
	str_rev(str, rev);
	printf("%s", rev);
	return 0;
}
void str_rev(char str[], char rev[])
{
	int i, j;
	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	j = 0;
	while (i != 0)
	{
		i = i - 1;
		rev[j] = str[i];
		j = j + 1;
	}
	rev[j] = '\0';
}
