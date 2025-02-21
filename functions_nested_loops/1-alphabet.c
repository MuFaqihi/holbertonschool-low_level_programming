#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: void
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
write(1, &letter, 1);
}
write(1, "\n", 1);
}
