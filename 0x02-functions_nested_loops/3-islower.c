#include "main.h"

/**
 *_islower - checks if the letter is lowercase
 *
 * @c: ACII code value
 *
 * Return: 0 if uppercase, 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
