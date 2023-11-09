#include "lists.h"

/**
 * add_dnodeint_end - adds a new nde at the end of the list
 * @head: pointer to the first element
 * @a: int to set in the next node.
 * Return: The address to the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int a)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->a = a;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	
	return (new);
}

