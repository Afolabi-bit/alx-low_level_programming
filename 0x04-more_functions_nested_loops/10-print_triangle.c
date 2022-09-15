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
		ws = size - l;
		while (ws <= size)
		{
			_putchar(' ');
			ws++;
		}
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		l++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
