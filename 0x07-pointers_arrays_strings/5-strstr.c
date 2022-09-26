#include "main.h"

/**
 * _strstr - Locates a sub-string
 * @haystack: Haystack
 * @needle: Needle
 * Return: Pointer to location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);

	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*needle == *haystack)
			{
				return (haystack);
			}
			needle++;
		}
		haystack++;
	}
	return (0);
}
