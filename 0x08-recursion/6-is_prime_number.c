#include "main.h"

/**
 * divisible - checks if the number is divisible
 * @n: number
 * @v: divisible
 * Return: if it is divisible
 */

int divisible(int n, int v)
{
	if (n % v == 0)
		return (0);
	if (v == n / 2)
		return (1);
	return (divisible(n, v + 1));
}

/**
 * is_prime_number - returns 1 if numberis prime else 0
 * @n: number
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	int v = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (divisible(n, v));
}
