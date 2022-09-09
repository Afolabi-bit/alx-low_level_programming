#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 * Return: Zero
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e')
		{
			c++
		} else if (c == 'q')
		{
			c++
		} else
		{
			putchar(c);
			c++;
		}
	}

	putchar('\n');

	return (0);
}
