#include "main.h"
#include <stdlib.h>


/**
 *print_number - prints number n (from -99999 to 99999)
 *@n: number to print
 *return: always 0
 */

void print_number(int n)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	if (n < 0)
	{
		_putchar('-');
	}
	a = abs(n) / 10000;
	b = (abs(n) % 10000) / 1000;
	c = (abs(n) % 1000) / 100;
	d = (abs(n) % 100) / 10;
	e = abs(n) % 10;
	if (a > 0)
		_putchar(a + '0');
	if (b > 0 || a > 0)
		_putchar(b + '0');
	if (c > 0 || b > 0 || a > 0)
		_putchar(c + '0');
	if (d > 0 || c > 0 || b > 0 || a > 0)
		_putchar(d + '0');
	_putchar(e + '0');
}
