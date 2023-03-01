#include "main.h"

/**
 * _strncpy - copies string b to a;
 * @dest: where string is copied to
 * @src: string to be copied
 * @n: length of string
 * Return: a pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
