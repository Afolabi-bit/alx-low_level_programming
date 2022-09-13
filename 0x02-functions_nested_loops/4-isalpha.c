#include "main.h"

/**
 * 4-isalpha - Checks if it is alpha
 * Description: Checks letters
 * @c: Param
 * Return: Zero
 */
int _isalpha(int c)
{
	if (c >= 'Aa' && c <= 'Zz')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
