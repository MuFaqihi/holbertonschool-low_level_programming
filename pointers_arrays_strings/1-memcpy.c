/**
 * _memcpy - Copies n bytes from the memory area pointed to by src
 *           to the memory area pointed to by dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
