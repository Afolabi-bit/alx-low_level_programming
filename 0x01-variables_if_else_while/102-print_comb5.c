#include <stdio.h>

/**
 * main - Prints all possible combinations of two two digits nums
 * Return: Zero
 */
int main(void)
{
	int a, b, c, d, i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; i++)
		{
			a = i / 10;
			b = i % 10;
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			c = j / 10;
			d = j % 10;
			putchar(c + '0');
			putchar(d + '0');
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
