#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list
 * @h: pointer
 * Return: size list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (count);

	while (*h)
	{
		count++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (count);
}
