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
		if (*accept == *s)
		{
			x++;
			accept++;
		}
		else if (*accept == '\0')
		{
			break;
		}
		s++;
	}
	if (*s == '\0' || *accept == '\0')
	{
		x = 0;
	}

	return (x);
}
