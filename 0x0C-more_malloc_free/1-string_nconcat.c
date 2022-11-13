#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - add two strings together
 * @s1 : first string
 * @s2: second string
 * @n: bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int e, f, a = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (e = 0; s1[e]; e++)
		;
	for (f = 0; s2[f]; f++)
		;

	if (f > n)
		f = n;

	c = malloc((sizeof(char) * e) + (sizeof(char) * f) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		c[a] = *s1;
		s1++;
		a++;
	}

	while (a < f + e)
	{
		c[a] = *s2;
		s2++;
		a++;
	}
	c[e + f] = '\0';

	return (c);
}
