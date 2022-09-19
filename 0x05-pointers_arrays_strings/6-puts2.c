#include "main.h"

/**
 * puts2 - prints even characters
 * @str: param
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++
	}
	_putchar('\n');
}
