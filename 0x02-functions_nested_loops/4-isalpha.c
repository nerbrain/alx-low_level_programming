#include "main.h"

/**
 *_isalpha - checks if the character c is a letter
 *
 * @c: ACII code value
 *
 * Return: 1 if it is a letter , 0 is its not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
