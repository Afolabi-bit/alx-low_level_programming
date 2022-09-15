#include "main.h"

/**
 * print_triangle - Prints triangle
 * Description: Prints Triangle
 * @size: Param
 * Return: zero
 */
void print_triangle(int size)
{
	int l, b, ws;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (ws = (size - 1); ws > 0; ws--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
