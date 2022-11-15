#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - dog stuff
 * @d: pointer
 *
 * Return: n/a
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
