#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer to previous memory block
 * @old_size: Old size of the memory block
 * @new_size: New size of the memory block
 * Return: New ptr or NULL if ptr is freed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *aux;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size < old_size)
	{
		aux = malloc(new_size);
		aux = ptr;
		free(ptr);
		ptr = aux;
		free(aux);
		return (ptr);
	}
	else
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
}
