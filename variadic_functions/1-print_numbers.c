#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings with a separator.
 * @separator: String to separate each printed string (NULL for no separator).
 * @n: Number of strings to print.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);
printf("\n");
}
