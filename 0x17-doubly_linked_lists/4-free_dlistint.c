#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - It frees dlistint_t list
 * @head: A pointer to beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *after;

	while (head != NULL)
	{
		after = head->next;
		free(head);
		head = after;
	}
}
