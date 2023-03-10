#include <stdio.h>

/**
 * main - prints all comand line args
 * @argc: length of command line args
 * @argv: vector array of args
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
