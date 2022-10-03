#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to string or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len1, len2, size;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;

	size = len1 + len2;
	p = malloc(sizeof(char) * (size + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	j = 0;
	for (i = len1; i < size; i++)
	{
		p[i] = s2[j];
		j++;
	}
	return (p);
}
