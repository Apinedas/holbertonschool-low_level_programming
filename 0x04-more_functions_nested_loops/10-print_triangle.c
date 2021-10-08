#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: Size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int lines, spaces;

		lines = 1;
		while (lines <= size)
		{
			spaces = size - lines;
			int i, j;

			i = 1;
			while (i <= spaces)
			{
				_putchar(' ');
				i++;
			}
			j = i;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			lines++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
