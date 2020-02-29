#include <unistd.h>

void mx_matrix_voice(void) {
	write(1, "\a\n", 2);
}

int main(void) {
	mx_matrix_voice();
}

