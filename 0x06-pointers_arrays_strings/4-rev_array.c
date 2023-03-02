#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @n: number of elements in an aray
 * @a: array of integers
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i <= n - 1 / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
