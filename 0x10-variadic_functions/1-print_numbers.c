#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and a separator
 * @separator: pointer to separator string
 * @n: number of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator != NULL && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				printf("%d%s", va_arg(args, int), separator);
			else
				printf("%d", va_arg(args, int));
		}
		printf("\n");
	}
}
