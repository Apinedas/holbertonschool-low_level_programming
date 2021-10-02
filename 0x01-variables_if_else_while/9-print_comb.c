/**
 * main - Prints digits separated by commas
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int c;

	c = '0';
	while (c <= '8')
	{
		putchar(c);
		putchar(',');
		c++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
