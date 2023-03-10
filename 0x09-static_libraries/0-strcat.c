#include "main.h"

/**
 * _strcat - concatinates strings
 * @dest: parent string
 * @src: string to be conatinated with parent string
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, dest_l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_l = i;

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j && src[i] != '\0'; i++)
	{
		dest[dest_l++] = src[i];
	}
	dest[dest_l + 1] = '\0';

	return (dest);
}
