#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return pointer
 * @b: int
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
