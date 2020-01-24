#include <stdio.h>
int mx_strlen(const char *s);

void main(void)
{
	char string[] = "Vladik top!!";
	int Vlad = mx_strlen(string);
	printf("%d\n", Vlad);
}

int mx_strlen(const char *s)
{
	int count = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
