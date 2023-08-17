#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - excecutes functions given as params
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
