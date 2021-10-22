#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: Counter of arguments
 * @argv: Vector of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
