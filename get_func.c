#include "main.h"

/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */

int (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{'c', _printf_char},
		{'s', _printf_string},
		{'d', _printf_decimal},
		{'i', _printf_integer},
	};
	while (i < 4)
	{
	if (x == arr[i].valid)
		return (arr[i].f);
	i++;
	}
	return (NULL);
}
