#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct spec - defines struct
 * @type: pointer for char variable
 * @funcptr: a function pointer
 *
 *Description: Structure to store char and function pointer
 */

struct spec
{
	char *type;
	int (*funcptr)(va_list);
};

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_double(va_list);
int print_integer(va_list);
int _putchar(char c);
int print_percentage(va_list);
int (*get_func(char))(va_list);
#endif