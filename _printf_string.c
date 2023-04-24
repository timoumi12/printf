#include "main.h"

/**
 * _printf_string - prints s
 * @args: string
 * Return: void
*/

int _printf_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
