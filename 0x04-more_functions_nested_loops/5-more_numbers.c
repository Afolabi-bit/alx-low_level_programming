#include "main.h"

/**
 * more_numbers - Prints nums multiplied by 10
 * Description: Prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	for (; i < 10; i++)
	{
		for (; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
