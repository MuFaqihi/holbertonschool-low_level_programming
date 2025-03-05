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
char *duplicate = haystack;

while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
{
needle++;
haystack++;
}
if (!*needle != '\0')
{
return (duplicate);
}
haystack++;
}
return (0);
}
