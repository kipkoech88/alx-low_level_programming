#include "main.h"

/**
 * checkdivisible - checks if number is not product of two smaller n
 * @a: smaller number
 * @b: number to test
 * Return: 1 if true else 0
 */

int checkdivisible(int a, int b)
{
	if (b == 1)
	{
		return (0);
	}
	else if (a % b == 0)
	{
		return (1);
	}
	return (checkdivisible(a, b - 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 if it is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (checkdivisible(n, n - 1));
}
