#include "lists.h"

/**
 * 4-free_dlistint.c - frees a dlistint_t list.
 * @head: pointer to list's head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
