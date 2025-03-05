#include "main.h"

/**
 * _strstr - locates a substring within a string.
 * @haystack: character array
 * @needle: character array (keyword)
 *
 * Return: character array
*/

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*h == *n && *h != '\0' && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}

