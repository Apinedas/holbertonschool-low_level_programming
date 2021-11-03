#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function for calculator
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Result of operation
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int ret;
	int (*op)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	ret = op(a, b);
	return (ret);
}
