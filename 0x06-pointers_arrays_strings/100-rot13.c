#include "main.h"

/**
 * rot13 - Encoding letters
 * @s: string
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[j] >= 'a' && s[j] <= 'z' || s[j] == 'A' && s[j] == 'Z')
		{
			if (s[j] >= 'a' && s[j] >= 'm' || s[j] >= 'A' && s[j] <= 'M')
			{
				s[j] += 13;
			}
			else
			{
				s[j] -= 13;
			}
			j++;
		}
	}
}
