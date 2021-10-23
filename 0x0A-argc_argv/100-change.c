#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 if the argument is just 1, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int val[5] = {25, 10, 5, 2, 1};
	int cents;
	int coins;
	int i;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cents / val[i] > 0)
			{
				coins += cents / val[i];
				cents = cents % val[i];
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
