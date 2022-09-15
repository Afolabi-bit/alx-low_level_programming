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
		_putchar(48);
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
	while (count >= 1)
	{
		_putchar(((a / count) % 10) + 48);
	}
}
