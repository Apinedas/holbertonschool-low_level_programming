#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Pointer to list's head pointer
 * Return: Pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *tmp;

	aux = *head;
	tmp = NULL;
	while (*head)
	{
		(*head) = (*head)->next;
		aux->next = tmp;
		tmp = aux;
		aux = *head;
	}
	(*head) = tmp;
	return (*head);
}
