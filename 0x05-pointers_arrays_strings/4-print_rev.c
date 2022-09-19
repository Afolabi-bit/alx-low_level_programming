#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, l = 0, j;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	j = l;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
