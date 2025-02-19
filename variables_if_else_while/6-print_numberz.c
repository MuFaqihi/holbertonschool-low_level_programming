#include <stdio.h>

/**
* main - print single digit numbers
* Return: Always 0
*/
int main(void)
{

int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}

putchar('\n');
return (0);
}
