#include "main.h"

/**
 * _puts - put string
 *
 * @str: address to char s
 *
 * Return: n/a
 */

void _puts(char *str)
{
	int a = 0;

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
