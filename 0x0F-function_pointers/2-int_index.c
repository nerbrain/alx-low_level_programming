#include "function_pointers.h"

/**
 * int_index - search int
 * @array: input array
 * @size: size of array
 * @cmp: pointer
 *
 * Return: n/a
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}

	}

	return (-1);
}
