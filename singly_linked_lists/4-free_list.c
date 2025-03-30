#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Function to free all nodes of a list_t list.
 * @head: Pointer to the head of the list (struct).
 * Return: None (void function).
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
