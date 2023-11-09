#include "lists.h"

/**
 * dlistint_len - It returns the number of elements in a linked list
 * @h: The poointer to the list
 * Return: The number of nodes.
 */


size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

		while (node)
		{
			cont++;
			node = node->next;
		}

	return (cont);
}
