#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - find length of a string.
 * @str: string
 *
 * Return: length
 */

char *_strdup(char *str)
{
	char *str1;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		;
	}
	a++;
	str1 = malloc(sizeof(char) * a);

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
		str1[b] = str[b];

	return (str1);
}

/**
 *new_dog - structure
 *@name: array of chars
 *@age: float
 *@owner: array of chars
 *
 *Return: string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
