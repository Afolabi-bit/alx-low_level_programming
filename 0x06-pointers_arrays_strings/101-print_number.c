#include "main.h"

/**
 * print_number - prints number
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	b = a;
	c = 1;
	while (y > 9)
	{
		b /= 10;
		c *= 10;
	}
	while (c >= 1)
	{
		_putchar(((a / c) % 10) + '0');
		c /=10;
	}
}
