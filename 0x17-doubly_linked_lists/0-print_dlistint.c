#include "lists.h"

/**
 * print_dlistint - It prints all the elements of dlistint_t
 * @h: The pointer to the list.
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->a);
		cont++;
		node = node->next;
	}

	return (cont);
}
