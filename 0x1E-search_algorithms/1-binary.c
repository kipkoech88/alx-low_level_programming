#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in sorted array
 * @array: sorted array
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL)
		return (-1);
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
		return ((int)half);
	if (value < array[half])
		return (binary_search(array, half, value));
	half++;
	return (binary_search(array + half, size - half, value) + half);
}
