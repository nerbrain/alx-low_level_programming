#include<stdio.h>

/**
 * print_alphabet - prints the alphabets
 *
 * Returns: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar("\n");
}
