#include "main.h"
/**
 * print_binary - Entry Point
 * @n: dec input
 * Return: 0
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
