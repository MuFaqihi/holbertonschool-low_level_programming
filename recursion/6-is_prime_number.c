#include "main.h"
/**
 * helper - helps decide if the number is prime
 * @i: helper int (current divisor)
 * @n: integer to test
 * Return: 1 if prime, 0 otherwise
 */
int helper(int i, int n)
{
if (n % i == 0 && n != i)
return (0);
if (n % i != 0 && i < n)
return (helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
int i = 2;

if (n < 2)
return (0);
return (helper(i, n));
}
