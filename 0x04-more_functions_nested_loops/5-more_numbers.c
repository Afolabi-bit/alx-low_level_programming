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
			if (j >= 10)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
