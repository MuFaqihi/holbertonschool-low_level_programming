#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: number to calculate the factorial of
 * Return: the factorial of the number, or -1 if the number is negative
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n > 0)
return (n * factorial(n - 1));
return (1);
}
