#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - It inserts new node at given position
 * @h: double pointer to beginning of the linked list
 * @idx: The index on which to insert the new node
 * @n: A data to enter into new node
 *
 * Return: The pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *now, *after, *_current;
	unsigned int x;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		_current = *h;
		for (x = 0; x < idx - 1 && _current != NULL; x++)
			_current = _current->next;
		if (_current == NULL)
			return (NULL);
	}
	now = malloc(sizeof(dlistint_t));
	if (now == NULL)
		return (NULL);
	now->n = n;
	if (idx == 0)
	{
		after = *h;
		*h = now;
		now->prev = NULL;
	}
	else
	{
		now->prev = _current;
		after = _current->next;
		_current->next = now;
	}
	now->next = after;
	if (now->next != NULL)
		now->next->prev = now;
	return (now);
}
