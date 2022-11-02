#include "main.h"

/**
 * _memset - set memory
 * @s: space of memory
 * @b: byte
 * @n: memory location
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
