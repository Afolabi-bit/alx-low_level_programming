#include <stdio.h>

/**
 * main - Prints all possible combinations of two two digits nums
 * Return: Zero
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = a + 1; c < 10; c++)
			{
				for (d = c + 1; d < 10; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (!((a == 9) && (b == 8) && (c == 9) && (d == 9)))
					{
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
