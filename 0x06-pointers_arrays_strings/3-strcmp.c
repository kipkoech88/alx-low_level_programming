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

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (s1[i] - s2[i]);
	}
}
