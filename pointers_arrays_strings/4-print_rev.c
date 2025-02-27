#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
int length = 0;

if (s == NULL)
return;

while (s[length] != '\0')
length++;

while (length > 0)
{
putchar(s[length - 1]);
length--;
}

putchar('\n');
}
