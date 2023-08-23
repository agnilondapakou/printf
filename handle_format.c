#include "main.h"
#include <stdarg.h>

/**
 * handle_format - handles format specifiers
 * @format: format specifier
 * @args: arguments
 * Return: number of characters printed
 */
int handle_format(const char *format, va_list args)
{
	int i = 0;
	int j = 0;
	int count = 0;

	if (format[i] == 'c')
		count += _putchar(va_arg(args, int));
	else if (format[i] == 's')
		count += print_str(va_arg(args, char *), j);
	else if (format[i] == 'd' || format[i] == 'i')
		count += print_int(va_arg(args, int));
	else if (format[i] == '\0')
		return (-1);
	else if (format[i] == '%')
		count += _putchar('%');
	else if (format[i] == 'b')
		count += print_binary(va_arg(args, int));
	else if (format[i] == 'u')
		count += print_unsigned(va_arg(args, unsigned int));
	else if (format[i] == 'o')
		count += print_octal(va_arg(args, unsigned int));
	else if (format[i] == 'x')
		count += print_hex(va_arg(args, unsigned int));
	else if (format[i] == 'X')
		count += print_HEX(va_arg(args, unsigned int));
	else if (format[i] == 'r')
		count += print_rev(va_arg(args, char *));
	else if (format[i] == 'R')
		count += print_rot(va_arg(args, char *));
	else
	{
		count += _putchar('%');
		count += _putchar(format[i]);
	}
	return (count);
}
