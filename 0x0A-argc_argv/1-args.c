#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: vector arrray of args
 * Return: o success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
