#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Returns: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for(b = 0; b <= 10; b++){

		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
}
