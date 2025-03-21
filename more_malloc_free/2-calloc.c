#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array and initializes it to zero.
  * @nmemb: The number of elements in the array.
  * @size: The size of each element in bytes.
  * Return: A pointer to the allocated memory, or NULL if allocation fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
s = malloc(nmemb * sizeof(char) * size);
if (s == NULL)
return (NULL);
for (i = 0; i < nmemb * sizeof(char) * size; i++)
s[i] = 0;
return (s);
}
