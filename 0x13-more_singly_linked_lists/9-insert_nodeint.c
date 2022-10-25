#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: list head
 *
 * @idx: index for insertion
 *
 * @n: data for new node
 *
 * Return: adr of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp1;
	unsigned int len = -1;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	if (!(*head))
		return (NULL);
	temp1 = *head;

	while (temp1)
	{
		len++;
		if (idx == len)
		{
			temp->n = n;
			temp->next = temp1->next;
			temp1->next = temp;
			return (temp1);
		}
		temp1 = temp1->next;
	}
	
	return (NULL);
}
