#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return - Zero
 */
void print_alphabet(void)
{
	int i = 'a';
	while(i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return (0);
}
