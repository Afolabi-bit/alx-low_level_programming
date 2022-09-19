#include "main.h"

/**
 * _strcpy - I'm trying hard to understand
 * @dest: Copy destination
 * @src: source of string to be copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < src[i]; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
