#include "lists.h"
#include<stdlib.h>

/**
 * pop_listint - deletes first node
 * @head: head
 *
 * Return: data
 */
int pop_listint(listint_t **head)
{
	int nd;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	nd = curr->n;
	h = curr->next;

	free(curr);

	*head = h;

	return (nd);
}
