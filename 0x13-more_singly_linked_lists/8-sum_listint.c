#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum
 * @head: head
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
