#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for a dog.
 * @d: pointer to a struct dog.
 *
 * Return: no return value (void function).
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);

free(d->owner);

free(d);
}
}
