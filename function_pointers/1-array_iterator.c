#include <stdlib.h>
#include "function_pointers.h"

/**
 * @array: The array to process.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to execute.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
