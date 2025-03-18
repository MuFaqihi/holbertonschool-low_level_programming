#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the given format
 * @format: List of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str, *separator = "";

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
printf("%s", separator);
separator = ", ";

if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
}
}
i++;
}

va_end(args);
printf("\n");
}
