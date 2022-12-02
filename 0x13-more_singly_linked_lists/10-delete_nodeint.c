#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node
 * @head: head
 * @index: Position of the node to delete.
 * Return: 1
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
