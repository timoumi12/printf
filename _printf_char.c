#include "main.h"

/**
 * _printf_char - prints a character
 * @args: argument value
 * Return: 1 the number
 */

int _printf_char(va_list args)
{
	char s;

	s = (char)va_arg(args, int);
	_putchar(s);
	return (1);
}
