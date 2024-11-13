#include <stdio.h>
void str_lwr(char str[]);

int main()
{
	char str[30];
	printf("enter a string: ");
	gets(str);
	str_lwr(str);
	puts(str);
	return 0;
}
void str_lwr(char a[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] = a[i] + 32;
		}
		i = i + 1;
	}
}
