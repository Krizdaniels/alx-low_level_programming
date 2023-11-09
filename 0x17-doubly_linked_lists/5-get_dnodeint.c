#include "lists.h"

/**
 * get_nodeint_at_index - it returns the nth node of a dlistint_t linked list
 * @head: The pointer to the list.
 * @index: nth node
 * Return: nth node, if the node exita returns NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
