#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: String to encode
 * Return: Pointer to encoded string
 */

char *rot13(char *s)
{
	char ch[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'};
	char ds[53] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm'};
	int i;
	int j;

	for (i = 0 ; (*(s + i) != '\0') ; i++)
	{
		for (j = 0 ; (*(ch + j) != '\0') ; j++)
		{
			if (*(s + i) == *(ch + j))
			{
				*(s + i) = *(ds + j);
				break;
			}
		}
		j = 0;
	}
	return (s);
}
