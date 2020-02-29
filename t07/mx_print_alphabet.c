void mx_printchar(char c);

void mx_print_alphabet(void) {
	int i, j = 0;
	for (i = 65, j = 98; i < 90; i += 2, j += 2) {		          		  mx_printchar(i);
		mx_printchar(j);
	}
	mx_printchar('\n');
}

int main(void) {
	mx_print_alphabet();
}

