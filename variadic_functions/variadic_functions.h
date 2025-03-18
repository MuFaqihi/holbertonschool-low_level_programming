#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_form - Struct for printing different types
 * @c: Type specifier character
 * @f: Function pointer to the appropriate print function
 */
typedef struct print_form
{
    char *c;
    void (*f)(va_list args);
} print_form_t;

/* Function prototypes */
void print_all(const char * const format, ...);
void print_string(va_list args);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
