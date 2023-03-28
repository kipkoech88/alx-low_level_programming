#include <stdlib.h>

/**
 * array_iterator -executes functions given parameters
 * @array: array
 * @size: size or array
 * @action: function to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
