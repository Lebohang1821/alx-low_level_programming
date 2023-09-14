#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - It adds node to the end of a linked list
 * @head: doubles pointer to the beginning of the linked list
 * @n: A value to add to new node
 *
 * Return: A pointer to new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *now, *cnp;

	if (head == NULL)
		return (NULL);
	now = malloc(sizeof(dlistint_t));
	if (now == NULL)
		return (NULL);
	now->n = n;
	now->next = NULL;
	if (*head == NULL)
	{
		now->prev = NULL;
		*head = now;
		return (now);
	}
	cnp = *head;
	while (cnp->next != NULL)
		cnp = cnp->next;
	cnp->next = now;
	now->prev = cnp;
	return (now);
}
