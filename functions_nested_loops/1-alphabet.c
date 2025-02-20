#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase
* Return: void
*/
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
}
