#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index of
 * a listint_t list
 *
 * @head: list head
 *
 * @index: lindex for node to be deleted
 *
 * Return: 1 for success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (-1);

	temp1 = *head;
	while (temp1)
	{
		len++;
		if (index == len)
		{
			temp = (temp1->next)->next;
			temp1->next = temp;
			return (1);
		}
		temp1 = temp1->next;
	}
	return (0);
}
