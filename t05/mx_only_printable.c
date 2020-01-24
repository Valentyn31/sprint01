#include <unistd.h>

void mx_printchar(char c);
void mx_only_printable(void);

void main(void)
{
	mx_only_printable();
}

void mx_only_printable(void)
{
	for(char i = 126; i > 32; i--)
	{
		mx_printchar(i);
	}
	write(1, "\n", 1);
}

