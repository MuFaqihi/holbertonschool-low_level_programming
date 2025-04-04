#include "lists.h"
/**
 * free_dlistint - A function that frees a doubly linked list.
 * @head: Pointer to the head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
