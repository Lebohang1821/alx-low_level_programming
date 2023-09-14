#include "lists.h"

/**
 * dlistint_len - It counts number of nodes in the linked list
 * @h: Its a pointer to beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
