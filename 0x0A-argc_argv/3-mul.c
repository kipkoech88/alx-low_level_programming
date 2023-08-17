#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc:argument count
 * @argv: array of arguments to the main program
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		result = i * j;

		printf("%d\n", result);

		return (0);
	}
}
