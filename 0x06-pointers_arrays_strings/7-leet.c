#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to be encoded
 * Return: nothing
 */

char *leet(char *s)
{
	int i, n;

	char *let = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[i] == let[n])
			{
				s[i] = num[n];
			}
		}
	}
	return (s);
}
