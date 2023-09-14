#include "lists.h"

/**
* print_dlistint - It prints the elements of
* dlistint_t list
*
* @h: Head the list
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t counter = 0;

if (h == NULL)
return (counter);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}

return (counter);
}
