#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
