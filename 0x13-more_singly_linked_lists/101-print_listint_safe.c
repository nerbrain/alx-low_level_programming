#include "lists.h"

/**
 * print_listint_safe - print
 * @head: head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ndNum = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		ndNum++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (ndNum);
}
