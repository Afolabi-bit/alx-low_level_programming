#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: list head
 * @idx: index
 * @n: new data
 * Return: Address of new node at index idx
 * or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *temp;

	/* Checks for an empty list with a given index */
	if (!(*h) && idx != 0)
		return (NULL);

	/* Iterates to the node after which to add new node */
	if (idx != 0)
	{
		temp = *h;
		for (; count < idx - 1 && temp; count++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	/* Allocate memory for new node */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	/* checks if the index is zero inserts at the start */
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);

}
