#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void);

void main(void)
{
	mx_write_knock_knock();
} 

void mx_write_knock_knock(void)
{
	char buf[] = "Follow the white rabbit.\nKnock, knock, Neo.\n";
	write(1, buf, strlen(buf));
}

