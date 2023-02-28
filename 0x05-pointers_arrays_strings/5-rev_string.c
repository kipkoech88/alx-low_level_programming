#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string to be reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, len;
	char c;

	i = 0;

	while (s[i] != '\0')
		i++;

	len = i - 1;

	for (j = 0; len >= 0 && j < len; len--, j++)
	{
		c = s[j];
		s[j] = s[len];
		s[len] = c;
	}
}
