#include <stdio.h>
void str_cpy(char str1[], char str2[]);

int main()
{
	char str1[50] = "Computer";
	char str2[50];
	str_cpy(str1, str2);
	printf("copy is succsecful\nstr2: %s", str2);
	return 0;
}
void str_cpy(char str1[], char str2[])
{
	int i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i = i + 1;
	}
	str2[8] = '\0';
}
