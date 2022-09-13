#include "main.h"

/**
 * _islower - Check for lowercase
 * Description: Is lower
 * Return: Zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
