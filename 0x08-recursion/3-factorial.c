#include "main.h"

/**
 * factorial - prints factorial of number
 * @n: number to get factorial for
 * Return: factorial of int n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
