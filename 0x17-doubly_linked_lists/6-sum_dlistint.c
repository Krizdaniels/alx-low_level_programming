#include "lists.h"

/**
 * sum_dlistint - It returns the sum of all the data (n) of the dlistint_t list
 * @head: The pointer to the lsit.
 * Return: Sum of all the data in the list, 0 if if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->a;
		node = node->next;
	}

	return (sum);
}
