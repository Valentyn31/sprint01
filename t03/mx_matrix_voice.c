#include <unistd.h>

void mx_matrix_voice(void);

int main(void)
{
	mx_matrix_voice();
}

void mx_matrix_voice(void)
{
	write(1, "\a\n", 2);
}

