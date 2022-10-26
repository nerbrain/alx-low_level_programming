#include "main.h"

/**
 * _puts - put string
 *
 * @s: address to char s
 *
 * Return: n/a
 */

void _puts(char *str)
{
	int a;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[a]);
		a++;
	}
}
