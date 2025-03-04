/**
 * _strpbrk - Finds the first occurrence of any byte from 'accept' in 's'.
 * @s: The string to search.
 * @accept: The string of accepted bytes.
 *
 * Return: A pointer to the first occurrence of any byte from 'accept' in 's'.
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
char *f;

i = 0;
while (s[i] != 0)
{
j = 0;
while (accept[j] != 0)
{
if (s[i] == accept[j])
{
f = &s[i];
return (f);
}
j++;
}
i++;
}
return (0);
}
