#include "main.h"
#include <stdio.h>

/**
 * _isprime - Evaluate if a number is a prime number
 * @n: Number to evaluate
 * Return: 0 if n isn't prime, 1 if it's prime
 */

int _isprime(int n)
{
	int i;

	i = 3;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	long n;
	long i;
	long maxpf;

	n = 612852475143;
	i = 2;
	maxpf = 0;
	while (n != 1)
	{
		if (_isprime(i) == 1 && n % i == 0)
		{
			n = n / i;
			if (n == 1)
			{
				maxpf = i;
			}
			i = 2;
		}
		i++;
	}
	printf("%ld\n", maxpf);
	return (0);
}
