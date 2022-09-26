#include "main.h"

/**
 * _strchr - Locates a charcter in a string
 * @s: Pointer to a string
 * @c: character
 * Return: pointer to address of c
 */
char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			x = s;
			break;
		}
		s++;
	}

	return (x);
}
