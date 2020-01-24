void mx_printchar(char c);
void mx_print_alphabet(void);

void main(void)
{
	mx_print_alphabet();
}

void mx_print_alphabet(void)
{
	for(char i = 65, j = 98; i < 90; i = (i + 2), j = (j + 2))
	{	mx_printchar(i);
		mx_printchar(j);
	}
	mx_printchar(10);
}

