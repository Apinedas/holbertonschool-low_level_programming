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

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	curr = *h;
	if (!curr && idx == 0)
	{
		*h = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	while (curr)
	{
		if (actual_idx == idx)
		{
			new->prev = curr;
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		else
		{
			curr = curr->next;
			actual_idx++;
		}
	}
	free(new);
	return (NULL);
}
