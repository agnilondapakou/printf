#include "main.h"

/**
 * print_octal - prints octal
 * @n: unsigned int
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;
	int i = 0;
	int j = 0;
	unsigned int num = n;
	unsigned int arr[100];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		arr[i] = num % 8;
		num /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
		count++;
	}
	return (count);
}
