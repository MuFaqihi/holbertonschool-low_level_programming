#include <stdio.h>

/**
 * _pow_recursion - calculates the power of an integer
 * @x: integer to raise to the power
 * @y: power to raise the integer to
 * Return: the result of x raised to the power of y, or -1 if y is negative
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
