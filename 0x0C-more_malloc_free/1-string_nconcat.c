#include "main.h"

/**
 * _strlen - Gives length og string
 * @s: Param
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		x++;
		i++;
	}

	return (x);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: Number of bytes
 * Return: Pointer to string, otherwise NULL
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int slen1, slen2, len, i, j;
	int num = n;
	
	/* Get lengths of strings */
	slen1 = _strlen(s1);
	slen2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);
	if (num >= slen2)
		num = slen2;

	len = slen1 + slen2 + 1;

	/* Allocate memory and check */
	p = malloc(len);
	if (p == NULL)
		return (NULL);

	i = 0;
	while (s1)
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < num)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';

	return (p);
}
