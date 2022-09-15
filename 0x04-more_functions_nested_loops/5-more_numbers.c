#include "main.h"

/**
 * more_numbers - Prints nums multiplied by 10
 * Description: Prints numbers
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j = 10;

	while (i < 15)
	{
		_putchar('0' + i * j);
	}
	_putchar('\n');
}
