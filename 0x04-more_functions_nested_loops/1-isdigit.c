#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: input to be checked
 * Return: 1 if it is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
