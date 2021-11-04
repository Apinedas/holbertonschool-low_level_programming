#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

unsigned int _strlen(const char * const s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}

/**
 * _strchr - locates a character in a string.
 * @s: String to search in
 * @c: Character to search
 * Return: Pointer to first occurrence of c in s, or NULL if character
 * is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	ret = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			break;
		}
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	else
		return (ret);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	char *types = "cifs";
	unsigned int i = 0, fmt_len = _strlen(format);
	va_list ap;
	char *check, *s;

	va_start(ap, format);
	while (i < fmt_len)
	{
		check = _strchr(types, format[i]);
		while (check != NULL)
		{
			switch (check[0])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s != NULL)
						printf("%s", s);
					else
						printf("(nil)");
					break;
			}
			if (i == (fmt_len - 1))
				printf("\n");
			else
				printf(", ");
			break;
		}
		i++;
	}
	va_end(ap);
}
