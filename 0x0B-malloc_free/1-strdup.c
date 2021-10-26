#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Pointer to string to copy
 * Return: Pointer to copied string
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *ret;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len += 1;
	ret = malloc(len);
	if (str == NULL || ret == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ret[i] = str[i];
	return (ret);
}
