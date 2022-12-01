#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head.
 *
 * Return: nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nds = 0;

	while (h != NULL)
	{
		h = h->next;
		nds++;
	}
	return (nds);
}
