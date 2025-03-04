/**
 * _memset - Fills a memory area with a specified byte value.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to fill the memory with.
 * @n: The number of bytes to fill.
 * Return: The pointer to the memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
