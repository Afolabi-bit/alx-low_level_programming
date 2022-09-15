#include "main.h"

/**
 * print_number - prints an integer
 * Description: Prints int
 * @n: Num
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 1000)
	{
		_putchar('0' + n / 1000);
		_putchar('0' + (n % 1000) / 100);
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + (n % 100) % 10);
	}
	else if (n >= 100)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + (n % 100) % 10);
	}
	else if (n >= 10)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + n);
	}
}
