#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: pointer to var a
 * @*b: pointer to var b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int a, b;

	a = *a;
	b = *b;
	*b = a;
	*a = b;
}
