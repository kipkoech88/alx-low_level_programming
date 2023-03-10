#include <ctype.h>
#include "main.h"

/**
 *_islower - checks if the character is lower
 * Return: 0 Success
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
