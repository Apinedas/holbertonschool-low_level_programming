#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: String which separates numbers
 * @n: Amount of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	{
		separator = (char *)malloc(sizeof(char));
		separator = "\0";
	}
	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
