#include "main.h"

/**
 * print_diagonal - print a line n times
 *
 * @n: number of times to print \
 *
 * Return: N/A
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}

	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
