#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of ints
 * @min: minimum int
 * @max: maximum int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);

}
