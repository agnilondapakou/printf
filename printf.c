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
	int count = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(format + i, args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
