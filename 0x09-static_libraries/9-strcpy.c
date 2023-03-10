#include "main.h"

/**
 * _strcpy - copy string to another
 * @dest: where the string is copied to
 * @src: srting to be copied
 * Return: pointer to the coied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
