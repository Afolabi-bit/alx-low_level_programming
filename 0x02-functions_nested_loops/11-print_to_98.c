#include "main.h"

/**
 * print_to_98 - Prints number from n to 98
 * Description: Prints in ascending order
 * @n: int val
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);

		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		printf("%d", i);
	}
}
