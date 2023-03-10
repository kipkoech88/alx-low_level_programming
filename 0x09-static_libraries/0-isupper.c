#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or lowercase
 *
 *@c: letter to be checked
 * Return: 1 if uppercase and 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
