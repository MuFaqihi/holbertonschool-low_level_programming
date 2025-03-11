#include "main.h"
#include <stdlib.h>

/**
 * create_array - Allocates memory and fills it with a character.
 * @size: Array size.
 * @c: Character.
 *
 * Return: Pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;

if (size == 0)
return (NULL);
pointer = malloc(sizeof(char) * size);
/*
 * Allocates bytes in memory and returns a pointer to it.
*/
if (pointer == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
pointer[i] = c;
return (pointer);
}
}
