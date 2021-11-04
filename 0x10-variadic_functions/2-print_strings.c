#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: String which separates numbers
 * @n: Amount of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	if (separator == NULL)
	{
		separator = (char *)malloc(sizeof(char));
		separator = "\0";
	}
	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s%s", s, separator);
		else
			printf("(nil)%s", separator);
	}
	s = va_arg(ap, char *);
	if (s != NULL)
		printf("%s\n", s);
	else
		printf("(nil)\n");
	va_end(ap);
}
