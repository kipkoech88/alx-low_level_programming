#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;

	*a = *b;
	*b = s;
}
