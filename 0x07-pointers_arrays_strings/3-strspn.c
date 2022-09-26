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
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				x++;
				break;
			}
			else if (*(accept + 1) = '\0')
			{
				x = x;
			}
			accept++;
		}
		s++;
	}
	return (x);
}
