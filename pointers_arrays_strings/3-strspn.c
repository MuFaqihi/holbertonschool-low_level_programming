/**
 * _strspn - Returns the length of the initial segment of a string
 *           that consists only of characters from a given set.
 * @s: The string to search.
 * @accept: The string of accepted characters.
 *
 * Return: The length of the matching segment.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, l, j, a;

i = l = 0;
while (s[i] != 0)
{
j = 0;
a = 0;
while (accept[j] != 0)
{
if (s[i] != accept[j])
{
j++;
}
else if (s[i] == accept[j])
{
a++;
l++;
j++;
}
}
if (a == 0)
return (l);
i++;
}
return (l);
}
