#include "main.h"

/**
 * print_times_table - Prints times table
 * Description: prints times table from 1 - 15
 * @n: integer val
 * Return: void
 */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res;

				res = i * j;
				if (j == 0)
				{
					_putchar('0' + res);
				} else if (res >= 10)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				} else if (res >= 100)
				{
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				} else
				{
					_putchar(' ');
					_putchar(res + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
}
