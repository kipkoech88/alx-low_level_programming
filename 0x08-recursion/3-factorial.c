#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to get factorial
 * Return: factorial of a number n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if ( n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
