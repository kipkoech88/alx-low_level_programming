#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: string to be checked
 * Return: nothing
 */

int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
