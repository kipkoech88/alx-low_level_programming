#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: Always nothing (except in error (1))
 */

int main(int argc, char *argv[])
{
	int a , c;
	int (*f)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	c = atoi(argv[3]);

	printf("%d\n", f(a, c));

	return (0);
}
