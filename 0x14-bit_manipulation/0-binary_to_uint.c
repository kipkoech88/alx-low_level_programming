#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary string to int
 * @b: binary string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		j <<= 1;
		j += (b[i] - '0');
		i++;
	}
	return (j);
}
