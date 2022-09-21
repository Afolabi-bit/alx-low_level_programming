#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Revs array
 * @a: array of integers
 * @n: Number of elements in array a
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, n2 = n;

	while (n > 0)
	{
		if (n != n2)
			printf(", ");
		printf("%d", a[i]);
		i--;
		n--;
	}
	printf("\n");
}
