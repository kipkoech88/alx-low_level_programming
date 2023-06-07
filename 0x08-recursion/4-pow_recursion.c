#include "main.h"

/**
 * _pow_recursion - returns power of two integers
 * @x: base integer
 * @y: power
 * Return: power of x ^ y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
