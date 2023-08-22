#include "main.h"

/**
 * print_int - prints integer
 * @n: integer to print
 *
 * Return: void
 */
int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n / 10)
		count += print_int(n / 10);
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
