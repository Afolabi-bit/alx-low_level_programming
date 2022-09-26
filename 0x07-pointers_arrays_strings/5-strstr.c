#include "main.h"

/**
 * _strstr - Locates a sub-string
 * @haystack: Haystack
 * @needle: Needle
 * Return: Pointer to location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*needle == *haystack)
			{
				return (haystack);
				break;
			}
			needle++;
		}
		haystack++;
	}
	return (0);
}
