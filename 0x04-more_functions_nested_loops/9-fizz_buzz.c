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
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d ", i);
		}

	return (0);
}
