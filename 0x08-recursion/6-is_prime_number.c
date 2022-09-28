#include "main.h"

/**
 * is_prime_number - Checks if arg is a prime num
 * @n: integer val
 * Return: 1 for true 0 for false
 */
int is_prime_number(int n)
{
	int c = 2;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, c));
	}
}

/**
 * prime - checks for prime num
 * @n: num
 * @c: check
 * Return: Zero or One
 */
int prime(int n, int c)
{
	if (n == c)
	{
		return (1);
	}
	else if ((n % c) == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, c + 1));
	}
}
