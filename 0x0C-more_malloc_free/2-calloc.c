#include "main.h"


/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: no of members
 * @size: ...
 * Return: NULL if malloc fails, size = 0, nmemb = 0
 * Pointer to memory is success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size ))
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
