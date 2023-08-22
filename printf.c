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
			switch (format[i])
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += print_str(va_arg(args, char *), j);
					break;
				default:
					count += _putchar(format[i]);
					break;
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
