#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints sum of two numbers
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
		for (int i = 1; i < argc; i++)
		{
			if (typeof(argv[i]) != int)
				{
					printf("Error\n");
					return (1);
				}
			else
			{
				i = atoi(argv[1]);
				j = atoi(argv[2]);

				result = j + 1;

				printf("%d\n", result);

				return (0);
			}
		}
}
