#include "main.h"

/**
 * _puts - Prints a string
 * @str: String param
 * Return: Void
 */
void _puts(char *str)
{
	int i = 0, x = 0;

	while (!(str[i] == '\0'))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}