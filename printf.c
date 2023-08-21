#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * _printf - prints output according the format
  * @format: the output format
  *
  * Return: number of caracters.
  */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int count = 0;
	va_list args;
	char *str;

	va_start(args, format);
	while (format && format[i] && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					j = va_arg(args, int);
					_putchar(j);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					print_str(str, j, count);
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					count++;
					break;
			}
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
