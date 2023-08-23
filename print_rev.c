#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: number of characters printed
 */
int print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		count++;
		i--;
	}
	return (count);
}
