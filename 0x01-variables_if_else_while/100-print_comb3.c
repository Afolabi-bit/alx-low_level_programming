#include <stdio.h>

/**
 * main - All possible combinations of two digits
 * Return: Zero
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(m + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
