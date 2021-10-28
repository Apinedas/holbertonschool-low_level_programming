#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Amount of elements of the array
 * @size: Size of each element
 * Return: pointer to the allocated memory, or NULL in fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	return (ret);
}
