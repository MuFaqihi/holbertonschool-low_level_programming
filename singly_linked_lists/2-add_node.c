#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - Function to add a new node to the linked list.
 * @head: Pointer to the head node of the list.
 * @str: String data to be stored in the new node.
 * Return: Pointer to the newly created node.
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
