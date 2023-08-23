#include "main.h"

/**
 * print_binary - prints binary
 * @n: unsigned int
 * Return: number of characters printed
*/
int print_binary(unsigned int n)
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
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
		count++;
	}
	return (count);
}
