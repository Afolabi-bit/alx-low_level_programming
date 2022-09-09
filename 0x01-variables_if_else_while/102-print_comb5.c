#include <stdio.h>

/**
 * main - Prints all possible combinations of two two digits nums
 * Return: Zero
 */
int main(void)
{
	int a1, b1, a2, b2;

	for (a1 = 0; a1 < 10; a1++)
	{
		for (b1 = a1; b1 < 10; b1++)
		{
			b2 = a1 + 1;
			for (a2 = 0; a2 < 10; a2++)
			{
				for (; b2 < 10; b2++)
				{
					putchar(a1 + '0');
					putchar(b1 + '0');
					putchar(' ');
					putchar(a2 + '0');
					putchar(b2 + '0');

					if (!((a1 != 9) || (b1 != 9) || (a2 != 8) || (b2 != 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
				b2 = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
