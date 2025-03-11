#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate from s2.
 *
 * Return: Pointer to the concatenated string, or NULL if malloc fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int size1 = 0, size2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[size1])
size1++;
while (s2[size2] && size2 < n)
size2++;

s = malloc(size1 + size2 + 1);
if (s == NULL)
return (NULL);

for (i = 0; i < size1; i++)
s[i] = s1[i];

for (i = 0; i < size2; i++)
s[size1 + i] = s2[i];

s[size1 + size2] = '\0';

return (s);

}
