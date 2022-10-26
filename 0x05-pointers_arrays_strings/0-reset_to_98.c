#include "main.h"

/**
 * swap_int - swap input values
 *
 * @a: address to a
 * @b: address to b
 *
 * Return: n/a
 */

void swap_int(int *a, int *b)
{
	int *temp;

	temp = *a;
	*a = *b;
	*b = *temp;
	printf("a=%d, b=%d", *a, *b);
}
