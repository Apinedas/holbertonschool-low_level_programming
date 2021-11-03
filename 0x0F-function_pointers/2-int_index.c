#include <stddef.h>

/**
 * int_index - searches for an integer using the cmp function
 * @array: array to look into
 * @size: Size of the array
 * @cmp: Pointer to function to compare
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
