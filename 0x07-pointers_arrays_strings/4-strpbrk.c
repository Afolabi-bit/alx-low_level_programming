#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String
 * @accept: Comparison string
 * Return: Pointer to byte where a match is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (0);
}
