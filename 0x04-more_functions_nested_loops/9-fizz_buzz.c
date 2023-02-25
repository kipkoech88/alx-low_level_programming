#include "main.h"
#include <stdio.h>

/**
 * main - prints number from 1 to 100
 * where if number is divisible by 3 it 
 * prints Fizz and where number is divisible by 5
 * it prints Buzz
 * but for multiples of 3 and 5
 * it prints FizzBuzz
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for ( i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
