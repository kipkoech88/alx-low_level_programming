#include "main.h"

/**
 * _strncat - concatinates strings
 * @dest:string to be concatinated into
 * @src: string to be concatinated to dest
 * @n: byte size of src
 * Return: a pointer to the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, dest_l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	dest_l = i;

	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[dest_l++] = src[j];
	}
	dest[dest_l + 1] = '\0';

	return (dest);
}
