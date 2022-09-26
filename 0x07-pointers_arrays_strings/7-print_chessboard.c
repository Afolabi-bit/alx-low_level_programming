#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: Dimension of chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, e;

	while (*a)
	{
		i = 0;
		while ((*a)[i] < (*a)[8])
		{
			e = (*a)[i];
			_putchar(e);
			i++;
		}
		_putchar('\n');
		a++;
	}
}
