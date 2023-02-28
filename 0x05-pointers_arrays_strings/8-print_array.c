#include "main.h"
#include <stdio.h>

/**
 * print_array - pints array of integers
 * @a: pointer to the array
 * @n: number of elements in array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
