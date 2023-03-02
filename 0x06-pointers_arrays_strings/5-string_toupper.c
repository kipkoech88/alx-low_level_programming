#include "main.h"

/**
 * string_toupper - converst string to uppercase
 * @str: string to be converted
 * Return: 0 success
 */

char *string_toupper(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] <= 'z' && str[n] >= 'a')
		{
			if (str[n] != '\n')
			{
				str[n] = str[n] - 32;
			}
		}
	}
	return (str);
}
