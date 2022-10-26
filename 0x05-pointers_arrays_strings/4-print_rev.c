#include "main.h"
#include<string.h>
/**
 * print_rev - print string in reverse
 *
 *@s: string
 *Return: n/a
 */

void print_rev(char *s)
{
	int i = strlen(s);

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
