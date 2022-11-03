#include "main.h"

/**
 * _puts_recursion - function that prints text
 *
 * @s: string to be printed
 *
 * Return: N/A
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
