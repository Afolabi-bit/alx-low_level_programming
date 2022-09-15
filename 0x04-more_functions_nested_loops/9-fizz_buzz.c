#include <stdio.h>
#include "main.h"

/**
 * main - Prints numbers from 1 - 100
 * Description: Prints fizz for multiples of 3
 * buzz for multiples of 5 and fizzbuzz for multiples of both
 * Return: Zero
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	_putchar('\n');

	return (0);
}
