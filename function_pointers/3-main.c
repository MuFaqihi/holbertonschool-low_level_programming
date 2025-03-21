#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * main - Performs basic operations.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 success.
*/

int main(int argc, char *argv[])
{
int arg1, arg2, result;
char o;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);

func = get_op_func(argv[2]);

if (!func)
{
printf("Error\n");
exit(99);
}

o = *argv[2];

if ((o == '/' || o == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}

result = func(arg1, arg2);

printf("%d\n", result);

return (0);
}
