#include <stdio.h>
#include "main.h"

/**
 * main - printts the filename from argv
 * @argc: argument count
 * @argv: argument vector array
 * Return: nothing
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
