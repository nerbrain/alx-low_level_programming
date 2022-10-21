#include "main.h"

/**
 * print_line - print a line n times
 *
 * @n: number of times to print \
 *
 * Return: N/A
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
