#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements
 * @cmp: pointer to a function to compare values
 * Return: index of the first elemnt for which cmp does not return 0;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
