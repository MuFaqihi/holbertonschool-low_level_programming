#include "holberton.h"

/**
* _isalpha - checks if a character is alphabetic (a letter)
* @c: The character to be checked.
* Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}

return (0);
}
