#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

int _strlen(const char *s)
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
 * twopow - calcs 2 raised to the n'th power
 * @n: Desired power
 * Return: Result
 */

int twopow(int n)
{
	int ret;

	if (n == 0)
		return (1);
	ret = 2 * twopow(n - 1);
	return (ret);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string which contains the binary number
 * Return: Converted number or 0 if the string is NULL or if there is
 * a character different of 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	int len, power;
	unsigned int ret;

	len = (_strlen(b) - 1);
	ret = 0;
	power = 0;
	if (b == NULL)
		return (0);
	while (len >= 0)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			ret += (b[len] - '0') * twopow(power);
			len--;
			power++;
		}
		else
			return (0);
	}
	return (ret);
}
