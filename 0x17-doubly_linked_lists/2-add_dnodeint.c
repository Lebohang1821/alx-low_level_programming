#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - It adds new node at the beginning of linked list
 * @head: It double a pointer to beginning of linked list
 * @n: The value that add the new node
 *
 * Return: A pointer to a new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *now;

	if (head == NULL)
		return (NULL);
	now = malloc(sizeof(dlistint_t));
	if (now == NULL)
		return (NULL);
	now->n = n;
	now->prev = NULL;
	now->next = *head;
	*head = now;
	if (now->next != NULL)
		(now->next)->prev = now;
	return (now);
}
