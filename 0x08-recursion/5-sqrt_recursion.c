#include "main.h"
/**
 * root - checks if the number has a natural sqrt
 * @p: number
 * @x: root
 * Return: root of p
 */


int root(int p, int x)
{
	if (x *x == p)
		return (x);
	if (x == (p / 2))
		return (-1);

	return (root(p, x + 1));
}

/**
 * _sqrt_recursion - returns a sqrt of a natural number
 * @n: integer
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (root(n, x + 1));
}
