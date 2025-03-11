#include <unistd.h>  /* Include the write library */

/**
 * _putchar - prints a single character
 * @c: the character to be printed
 *
 * Return: 1 on success, -1 on error.
*/
int _putchar(char c)
{
return (write(1, &c, 1));  /* Use write to print the character */
}
