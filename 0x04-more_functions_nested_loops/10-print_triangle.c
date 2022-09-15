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

	l = 0;
	while (l < size)
	{
		b = 0;
		while (b < size)
		{
			ws = 0;
			while (ws == b)
			{
				_putchar(' ');
				ws--;
			}
			_putchar('#');
			b++;
		}
		_putchar('\n');
		l++;
	}
}
