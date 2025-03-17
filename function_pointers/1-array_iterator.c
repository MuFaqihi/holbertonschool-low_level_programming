#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element of an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Function pointer to be applied to each element.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
