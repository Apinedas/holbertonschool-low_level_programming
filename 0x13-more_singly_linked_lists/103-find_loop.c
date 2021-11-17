#include "lists.h"

/**
 * distance_nodes2 - Calcs the distance between two nodes
 * @n1: Pointer to node 1
 * @n2: Pointer to node 2
 * Return: Distance from node 1 to node 2
 */

unsigned int distance_nodes2(listint_t *n1, listint_t *n2)
{
        unsigned int distance;
        const listint_t *aux;

        distance = 0;
        aux = n1;
        while (aux && aux != n2)
        {
                distance += 1;
                aux = aux->next;
        }
        return (distance);
}

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
