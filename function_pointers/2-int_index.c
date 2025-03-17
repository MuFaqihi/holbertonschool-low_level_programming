#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array to search in.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used for comparison.
 *
 * Return: Index of the first element for which the cmp function
 *         does not return 0, or -1 if no match is found
 *         or if size is negative.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
