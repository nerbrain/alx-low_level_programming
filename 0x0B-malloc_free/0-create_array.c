#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create array
 *@size: size of array
 *@c: array
 *
 *Return: character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *m;

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(char) * size);
	if (m == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < size)
	{
		m[a] = c;
		a++;
	}
	return (m);
}
