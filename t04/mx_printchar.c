#include <unistd.h>

void mx_printchar(char c);

void main(void)
{
	char x = 65;
	mx_printchar(x);
}

void mx_printchar(char c)
{
	write(1, &c, 1);
}
