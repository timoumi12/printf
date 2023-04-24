#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 *
*/
typedef struct specifier
{
	char valid;
	int (*f)(va_list);
} spec;

int (*get_func(char x))(va_list);

int _putchar(char c);

int _printf(const char *format, ...);

int _printf_string(va_list args);

int _printf_char(va_list args);

int _printf_integer(va_list args);

int _printf_decimal(va_list args);

#endif
