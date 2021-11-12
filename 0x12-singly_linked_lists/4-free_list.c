#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head of linked list
 */

void free_list(list_t *head)
{
	while (head && head->next)
	{
		if (head->str)
			free(head->str);
		head = head->next;
	}
	if (head->str)
		free(head->str);
	free(head);
}
