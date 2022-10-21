#include "lists.h"

/**
 * print_list - prints all elements of a list
 *
 * @h: address of the node head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	char *s;
	int n;

	while (h)
	{
		n = h->len;
		s = h->str;

		num++;
		if (h->str != NULL)
		{
			_putchar('[');
			_putchar(n + '0');
			_putchar(']');
			_putchar(' ');

			while (*s)
			{
				_putchar(*s);
				s++;
			}
		}
		else
		{
			_putchar('[');
			_putchar(0 + '0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		_putchar('\n');

		h = h->next;
	}
	return (num);
}
