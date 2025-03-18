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
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s%s", separator, str ? str : "(nil)");
break;
}
separator = ", ";
i++;
}

va_end(args);
printf("\n");
}
