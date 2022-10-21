#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: adr of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	free(head);
}
