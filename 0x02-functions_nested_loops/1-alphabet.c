#include "main.h"

/**
 * main - prints alphabet
 * print_alphabet - Prints the alphabet in lowercase
 * Return: Zero
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();

	return (0);
}
void print_alphabet(void)
{
	char i = 'a';
	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
