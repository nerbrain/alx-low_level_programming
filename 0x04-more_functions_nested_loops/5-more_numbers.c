#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 ten times
 *
 * Return: N/A
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + 48);
			}
			_putchar(b % 10 + 48);
		}
		_putchar('\n');
	}
}
