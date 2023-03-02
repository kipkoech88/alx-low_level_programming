#include "main.h"

/**
 * rot13 - encodes a string using
 * rot13
 * @s: string to be encoded
 * Return: nthing
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i] >= 'Z' - 13 || s[i] >= 'z' - 13)
			{
				s[i] = s[i] - 13;
			}
			else
			{
				s[i] = s[i] + 13;
			}
		}
	}
	return (s);
}
