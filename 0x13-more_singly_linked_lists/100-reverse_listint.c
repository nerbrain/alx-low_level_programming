#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	n = NULL;
	p = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
