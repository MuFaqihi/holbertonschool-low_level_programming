#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - Prints a string
 * @args: The argument list containing the string
*/
void print_string(va_list args)
{
char *string = va_arg(args, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
}

/**
 * print_char - Prints a character
 * @args: The argument list containing the character
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: The argument list containing the integer
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a floating-point number
 * @args: The argument list containing the float
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_all - Prints any type of argument based on format specifiers
 * @format: A list of types of arguments passed
*/
void print_all(const char * const format, ...)
{
va_list args;
char *sep = "";
int i = 0, j;

print_form_t print_form[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(args, format);

while (format && format[i])
{
j = 0;
while (j < 4)
{
if (*print_form[j].c == format[i])
{
printf("%s", sep);
print_form[j].f(args);
sep = ", ";
break;
}
j++;
}
i++;
}

printf("\n");
va_end(args);
}
