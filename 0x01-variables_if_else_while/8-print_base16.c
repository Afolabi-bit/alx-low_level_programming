#include <stdio.h>

/**
 * main - Prints all the numbers in base 16 in lowercase.
 * Return: Zero
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (int c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
