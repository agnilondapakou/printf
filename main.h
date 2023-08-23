#include <stdarg.h>
#ifndef _VARIADIC_H_
#define _VARIADIC_H_


int _printf(const char *format, ...);
int _putchar(int c);
int print_str(char *str, unsigned int j);
int print_int(int n);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n);
int print_HEX(unsigned int n);
int print_rev(char *str);
int print_rot(char *str);
int handle_format(const char *format, va_list args);

#endif
