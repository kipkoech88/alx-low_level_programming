#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int a, b;

	int *ptr;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
