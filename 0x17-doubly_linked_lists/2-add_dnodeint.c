#include "lists.h"

/**
 * add_dnodeint - It adds a new node at the begining of a dlistint_t list.
 * @head: The pointer to the first element of the list.
 * @a: int to set in the new node
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int a)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->a = a;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
