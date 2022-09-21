#include "main.h"

/**
 * _strcmp - Compares strings
 * @s1: String 1
 * @s2: String 2
 * Return: -15, 0 or 15
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (*s1 != *s2)
	{
		x = *s1 - *s2;
	}
	return (x);
}
