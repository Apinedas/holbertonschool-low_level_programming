/**
 * double_space_comma - prints a comma followed by two spaces
 * Return: Always 0
 */

#include "main.h"

void double_space_comma(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * single_space_comma - prints a comma followed by an space
 * Return: Always 0
 */

void single_space_comma(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always 0
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			c = a * b;
			if (c < 10)
			{
				_putchar(c + '0');
				if (b != 9)
				{
					double_space_comma();
				}
			}
			else
			{
				int d;
				int e;

				d = c / 10;
				e = c % 10;
				_putchar(d + '0');
				_putchar(e + '0');
				if (b != 9)
				{
					single_space_comma();
				}
			}
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
