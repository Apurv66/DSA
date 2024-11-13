#include <stdio.h>
int str_len(char str[]);

int main()
{
	char str[50];
	int len;
	printf("Enter a string: ");
	gets(str);
	len = str_len(str);
	printf("lenght = %d", len);
	return 0;
}
int str_len(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
