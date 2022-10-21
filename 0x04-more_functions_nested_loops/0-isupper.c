#include<stdio.h>
#include <ctype.h>

/**
 * _isupper - find if char is uppercase or not
 *
 * @c: input
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
