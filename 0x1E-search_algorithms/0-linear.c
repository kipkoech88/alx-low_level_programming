#include <stdlib.h>
#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array
 * @array: is the array to be searched
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of the first value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
