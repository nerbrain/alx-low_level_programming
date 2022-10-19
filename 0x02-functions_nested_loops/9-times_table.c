#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * times_table - prints multiples of 9
 *
 *
 * Return: something
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{

		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (b > 0 && c < 10)
			{
				_putchar(' ');
			}

			if (c <= 9)
			{
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
