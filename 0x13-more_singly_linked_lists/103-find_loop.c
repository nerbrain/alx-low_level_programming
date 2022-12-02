#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point2, *previous;

	previous = head;
	point2 = head;
	while (head && point2 && point2->next)
	{
		head = head->next;
		point2 = point2->next->next;

		if (head == point2)
		{
			head = previous;
			previous =  point2;
			while (1)
			{
				point2 = previous;
				while (point2->next != head && point2->next != previous)
				{
					point2 = point2->next;
				}
				if (point2->next == head)
					break;

				head = head->next;
			}
			return (point2->next);
		}
	}

	return (NULL);
}
