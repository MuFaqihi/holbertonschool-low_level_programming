#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate (in bytes)
 *
 * Return: Pointer to the allocated memory, or exit with status 98
 * if malloc fails
*/
void *malloc_checked(unsigned int b)
{
void *tmp;

tmp = malloc(b);
if (tmp == NULL)
{
exit(98);
}
return (tmp);
}
