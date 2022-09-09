#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 * Return: Zero
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
