#include "main.h"

/**
 * returnsPrime - checks if it has natural square
 * @a: int
 * @b: int
 * Return: value of sqrt of n
 */

int returnsPrime(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (returnsPrime(a + 1, b));
}

/**
 * _sqrt_recursion - gives sqrt of n
 * @n: int
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (returnsPrime(1, n));
}
