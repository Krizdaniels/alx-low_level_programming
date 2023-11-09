#ifndef LISTS
#define LISTS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - The doubly linked list
 * @a: integer
 * @prev: It points to the previous node
 * @next: it points to the next node
 *
 * Desciption: The doubly linked list node structure
 * for ALX SE Project
 */

typedef struct dlistint_s
{
	int a;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}
dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int a);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int a);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int a);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
