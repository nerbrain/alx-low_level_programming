#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: address to s to find string length
 *
 * Return: char length
 */

int _strlen(char *s)
{
	int a;

	while (s[a])
	{
		a++;
	}

	return (a);
}
