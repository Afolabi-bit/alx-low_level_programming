#include "main.h"

/**
 * print_number - prints an integer
 * Description: Prints int
 * @n: Num
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
		a = n;
	}
	b = a;
	c = 1;
	while (b > 9)
	{
		b /= 10;
		count *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		_putchar(((a / c) % 10) + '0');
	}
}
