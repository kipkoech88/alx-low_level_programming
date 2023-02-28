#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <stdio.h>

/**
 * main - generates passwords for keygen file
 * Return: generated password
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	printf("%i\n", n);

	return (0);
}
