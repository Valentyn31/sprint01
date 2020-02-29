void mx_printchar(char c);

void mx_hexadecinal(void) {
	char i = 48;

	for(i = 48; i < 58; i++) {
		mx_printchar(i);
	}
	for(i = 65; i < 71; i++) {
		mx_printchar(i);
	}
	mx_printchar('\n');
}

int main(void) {
	mx_hexadecinal();
}

