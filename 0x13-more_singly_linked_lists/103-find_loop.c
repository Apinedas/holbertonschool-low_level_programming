#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: List's head pointer
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	unsigned int position;
	listint_t *aux;

	aux = head;
	position = 0;
	while (aux && aux->next)
	{
		if (position > distance_nodes2(head, aux))
			return (aux);
		aux = aux->next;
		position += 1;
	}
	return (NULL);
}
