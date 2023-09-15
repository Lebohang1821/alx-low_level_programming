#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - It deletes node at a specific index
 * @head: It doublse pointer to the linked list
 * @index: The index at which to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *_current;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);
	_current = *head;
	if (index == 0)
	{
		*head = _current->next;
		if (_current->next != NULL)
		{
			_current->next->prev = NULL;
		}
		free(_current);
		return (1);
	}
	for (x = 0; x < index; x++)
	{
		if (_current->next == NULL)
			return (-1);
		_current = _current->next;
	}
	_current->prev->next = _current->next;
	if (_current->next != NULL)
		_current->next->prev = _current->prev;
	free(_current);
	return (1);
}
