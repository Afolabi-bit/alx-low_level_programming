#include <stdio.h>

/**
 * main - Prints 0 - 9 using putchar
 * Return: Zero
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
