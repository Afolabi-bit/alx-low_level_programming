#include "main.h"

/**
 * more_numbers - Prints nums multiplied by 10
 * Description: Prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
