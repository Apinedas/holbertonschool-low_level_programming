#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to pointer of list's head
 * @idx: Index to insert new node
 * @n: int to insert
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;
	unsigned int actual_idx = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		if (*h)
		{
			(*h)->prev = new;
			new->next = *h;
			*h = new;
		}
		else
			new->next = NULL;
		return (new);
	}
	curr = *h;
	while (curr)
	{
		if (actual_idx == idx)
		{
			(curr->prev)->next = new;
			new->prev = curr->prev;
			new->next = curr;
			return (new);
		}
		curr = curr->next;
		actual_idx++;
	}
	free(new);
	return (NULL);
}
