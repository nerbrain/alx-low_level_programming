#include "main.h"

/**
 * _memcpy - copies 
 * @dest: copy to
 * @src: copy from
 * @n: how many times
 * Return: return value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
