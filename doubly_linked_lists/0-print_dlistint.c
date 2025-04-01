#include "lists.h"
/**
 * print_dlistint - A function that prints elements of a doubly linked list.
 * @h: Pointer to the head of the list to be printed.
 *
 * Return: On success, 1.
 * On error, returns -1 and sets errno accordingly.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
