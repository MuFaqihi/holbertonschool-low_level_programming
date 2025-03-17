#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: Pointer to a function that prints a string.
*/

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
