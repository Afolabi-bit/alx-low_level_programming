#include <unistd.h>
#include <string.h>

/**
 * _putchar - writes a character c to stdout
 * @c: The character to print
 * Return: Always 1 for success, -1 for error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
