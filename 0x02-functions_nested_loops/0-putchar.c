#include "main.h"

/**
 * main - Prints _putchar
 * Return: Zero
 */
int main(void)
{	
	char a[] = "_putchar";
	int a_len = strlen(a);
	int i = 0;

	for (; i < a_len; i++)
	{
		_putchar(a[i]);
	}
	_putchar("\n");

	return (0);
}
