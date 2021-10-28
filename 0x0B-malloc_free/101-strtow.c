#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits a string into words.
 * @str: String to split
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j, k, l, words, wlen;
	char **ret;

	words = wlen = l = 0;
	if (str[0] == '\0' || str == NULL || str == " ")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			words += 1;
	}
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			for (j = i + 1; str[j] != ' '; j++)
				wlen += 1;
			ret[l] = (char *)malloc((wlen + 1) * sizeof(char));
			if (ret[l] == NULL)
			{
				while (l >= 0)
				{
					free(ret[l]);
					l--;
				}
				free(ret);
				return (NULL);
			}
			for (j = i + 1, k = 0; str[j] != ' '; j++, k++)
				ret[l][k] = str[j];
			ret[l][k] = '\0';
			wlen = 0;
			l++;
		}
	}
	ret[l] = NULL;
	return (ret);
}
