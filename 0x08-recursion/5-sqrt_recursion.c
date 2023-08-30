#include "main.h"

/**
 * hasroot - checks for naturalroot of n
 * @i: int
 * @j: int
 * Return: sqrt of n
 */

int hasroot(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (hasroot(i + 1, j));
}
/**
 * _sqrt_recursion - returns squareoot of n
 * @n: int
 * Return: squaroot
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (hasroot(1, n));
}
