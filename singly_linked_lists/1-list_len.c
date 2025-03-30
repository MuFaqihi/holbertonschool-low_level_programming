#include "lists.h"
/**
 * list_len - Function to count and return the number of elements
 *            in a linked list_t list.
 * @h: Pointer to the linked list (input).
 * Return: Number of elements in the list.
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
