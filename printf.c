#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * _printf - prints output according the format
  * @format: the output format
  * Return: number of caracters.
  */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
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
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
