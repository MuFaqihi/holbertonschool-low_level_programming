#include "main.h"

/**
 * print_line - Print a line of n length
 * @n: Length of line
 * Return: 0
*/
void print_line(int n)
{
int c = 0;

while (c < n)
{
if (n > 0)
_putchar('_');
c++;
}
_putchar('\n');
}
