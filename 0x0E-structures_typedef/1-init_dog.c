#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialize type dog
 * @d: the dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
