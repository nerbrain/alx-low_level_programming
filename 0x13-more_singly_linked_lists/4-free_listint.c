#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - releases list
 * @head: head
 *
 * Return: n/a
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
