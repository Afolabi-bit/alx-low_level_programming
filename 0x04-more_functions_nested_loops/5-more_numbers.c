#include "main.h"

/**
 * more_numbers - Prints nums multiplied by 10
 * Description: Prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int i = 1, j = 0, a, b;

	while (i <= 10)
	{
		while (j < 15)
		{
			a = j / 10;
			b = j % 10;
			if (j > 9)
			{
				_putchar('0' + a);
			}
			_putchar('0' + b);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
