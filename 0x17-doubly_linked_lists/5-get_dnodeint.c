#include "lists.h"

/**
* get_dnodeint_at_index - It finds specific node of a linked list
* @head: A pointer to beginning of the list
* @index: An index of the node to retrieve
*
* Return: A pointer to the indexed node, or NULL on failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x;

if (head == NULL)
return (NULL);

for (x = 0; x < index && head != NULL; x++)
{
head = head->next;
}

return (x == index ? head : NULL);
}
