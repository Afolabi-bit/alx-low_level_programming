#include "main.h"

/**
 * jack_bauer - Prints minutes of day
 * Description: All minutes of day
 * Return: Zero
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 25; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
