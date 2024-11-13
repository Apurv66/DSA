#include <stdio.h>
void str_upr(char str[]);

int main()
{
	char str[20];
	printf("enter a string: ");
	gets(str);
	str_upr(str);
	printf(str);
	return 0;
}
void str_upr(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
}
