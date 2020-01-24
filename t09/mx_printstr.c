#include <unistd.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);

void main(void)
{
	char Vlad[] = "I am Vlad. Nice to meat you!";
	mx_printstr(Vlad);
	write(1, "\n", 1);
}

void mx_printstr(const char *s)
{
	write(1, s, mx_strlen(s));
}
