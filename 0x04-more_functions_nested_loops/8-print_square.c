#include "main.h"

/**
 * print_square - prints a square
 * @size: Lenght of the square
 * Return: Always 0
 */

void print_square(int size)
{
	if (size > 0)
	{
		for (int row = 1; row <= size; row++)
		{
			for (int col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
