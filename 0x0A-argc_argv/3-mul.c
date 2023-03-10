#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * from command line
 * @argc: length of args
 * @argv: vector array of args
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	return (0);
}
