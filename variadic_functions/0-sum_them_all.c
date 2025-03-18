#include <stdarg.h>

/**
 * sum_them_all - Adds a specified number of arguments.
 * @n: Number of arguments to be summed up.
 *
 * Return: The sum of the arguments.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

i = sum = 0;

va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return (sum);
}
