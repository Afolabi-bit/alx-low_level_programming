#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s:  String
 * @accept: substring
 * Return: Int val of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			x++;
			accept++;
		}
		s++;
	}
	if (*s == *accept)
	{
		x++;
	}
	return (x);
}
