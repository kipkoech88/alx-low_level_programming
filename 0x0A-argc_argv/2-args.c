#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - prints all the arguments it receives
 * @argc: argument count
 * @argv: argument vector array
 * Return: Always 0(success)
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
