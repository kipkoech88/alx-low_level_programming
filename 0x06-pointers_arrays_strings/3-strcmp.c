#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Returns 1 ,0 or greater than 1;
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag;

	flag = 0;

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
